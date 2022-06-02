// 헤더 선언
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "RegisterUI.h"
#include "Register.h"
#include "LoginUI.h"
#include "MemberList.h"
#include "LogoutUI.h"
#include "WithdrawUI.h"
#include "./Boundary/RegisterSellingClothesUI.h"
#include "./Boundary/ListSellingClothesUI.h"
#include "./Boundary/ListSoldoutClothesUI.h"
#include "./Boundary/PrintSoldStatisticsUI.h"
#include "./Entity/SellingClothesCollection.h"
#include "ItemSearch.h"
#include "ItemPurchase.h"
#include "ItemPurchaseListView.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void registerMem();
void withdrawMem();
void loginMem();
void logoutMem();
void regist();
void listing();
void listingSoldout();
void printStatistics();
void program_exit();
MemberList memberListMain;
RegisterUI registerUI;	
LoginUI loginUI;
LogoutUI logoutUI;
WithdrawUI withdrawUI;
SellingClothesCollection sellingClothesCollection;
RegisterSellingClothesUI registerSellingClothesUI;
ListSellingClothesUI listSellingClothesUI;
ListSoldoutClothesUI l1stSoldoutClothesUI;
PrintSoldStatisticsUI printSoldStatisticsUI;
ItemPurchaseListView purchaseListView;
ItemPurchaseList purchaseList;
ItemPurchase itempurchase;
ItemSearch itemsearch;

// 변수 선언
ifstream readFile;
ofstream writeFile;
string userID = "NULL";
int num = 0;
int numMem = 0;
bool Log = false;

int main() 
{
	// 파일 입출력을 위한 초기화
	readFile.open(INPUT_FILE_NAME);
	if (!readFile)
	{
		perror("error fopen input.txt");
		return 0;
	}

	writeFile.open(OUTPUT_FILE_NAME);
	if (!writeFile)
	{
		perror("error fopen output.txt");
		return 0;
	}

	doTask();

	readFile.close();
	writeFile.close();
	return 0;
}


void doTask()
{
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (is_program_exit == 0)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		readFile >> menu_level_1 >> menu_level_2;

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:		// 1.1 회원가입
			{
				registerMem();
				break;
			}
			case 2:		// 1.2 회원탈퇴
			{
				withdrawMem();
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:		// 2.1 로그인
			{
				loginMem();
				break;
			}
			case 2:		// 2.2 로그아웃
			{
				logoutMem();
				break;
			}
			}
			break;

		}
		case 3:
            {
                switch(menu_level_2)
                {
                    //판매 의류 등록, (상품명, 제작회사명, 가격, 수량)
                    case 1:
                    {
                        regist();
                        break;
                    }
                    //등록 상품 조회
                    case 2:
                    {
                        listing();
                        break;
                    }
                    //판매 완료 상품 조회
                    case 3:
                    {
                        listingSoldout();
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
		case 4:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					// 상품명 입력
					writeFile << "4.1. 상품 정보 검색\n";
					readFile >> clothname;
					// 상품정보 검색
					ItemSearch itemsearch;
					writeFile << "> " << itemsearch.searchItem(sellingClothesCollection, clothname) << endl;

					break;

				}
				case 2:
				{
					// 상품 구매
					printf("4.2\n");
					writeFile << "4.2. 상품 구매\n";
					writeFile << "> " << itempurchase.purchaseItem(&purchaseList, sellingClothesCollection, clothname) << endl;

					break;
				}
				case 3:
				{
					// 상품 구매 내역 조회
					printf("4.3\n");
					writeFile << "4.3. 상품 구매 내역 조회\n";
					writeFile << "> " << purchaseListView.checkPurchaseList(&purchaseList) << endl;

					break;
				}
				case 4:
				{
					// 상품 구매만족도 평가
					// 구매만족도 입력
					int evaluation = 0;
					printf("4.4\n");
					writeFile << "4.4 상품 구매만족도 평가\n";
					readFile >> evaluation;

					writeFile << purchaseListView.checkSatisfaction(&purchaseList, sellingClothesCollection, clothname, evaluation);

					break;
				}
				default:
				{
					break;
				}
			}
			break;
		}
        case 5:
		{
            switch (menu_level_2)
            {
                case 1:
				{
					printStatistics();
					break;
				}
                default:
				{
					break;
				}
            }
                break;
        }
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:   // "6.1. 종료“ 메뉴 부분
			{
				program_exit();
				is_program_exit = 1;
				break;
			}
			}

		}
		return;
		}
	}
}


void registerMem()
{
	char name[MAX_STRING], regNum[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
	readFile >> name >> regNum >> ID >> password;
	memberListMain.memberList[numMem++] = registerUI.enterInfo(name, regNum, ID, password);
	memberListMain.memberNum++;
	writeFile << "1.1 회원가입" << endl;
	writeFile << "> " << name << " " << regNum << " " << ID << " " << password << endl;

}

void withdrawMem()
{
	if (userID != "NULL") {
		writeFile << "1.2 회원탈퇴" << endl;
		writeFile << "> " << withdrawUI.withdraw(userID, memberListMain) << endl;
		memberListMain.deleteMember(userID, memberListMain);

		userID = "NULL";
	}
	else {
		writeFile << "1.2 회원탈퇴" << endl;
		writeFile << "> 로그인 해주세요" << endl;
	}
}

void loginMem() {
	char ID[MAX_STRING], password[MAX_STRING];
	readFile >> ID >> password;

	if (loginUI.login(ID, password, memberListMain) == true) {
		writeFile << "2.1 로그인" << endl;
		writeFile << "> " << ID << " " << password << endl;
		userID = ID;
	}
	else {
		writeFile << "2.1 로그인" << endl;
		writeFile << "> 실패" << endl;
	}
}

void logoutMem() {
	if (userID != "NULL") {
		writeFile << "2.2 로그아웃" << endl;
		writeFile << "> " << logoutUI.logout(userID, memberListMain) << endl;
		userID = "NULL";
	}
	else {
		writeFile << "2.2 로그아웃" << endl;
		writeFile << "> 로그인 해주세요" << endl;
	}
}


//유저 아이디 넣는거 해야할듯
void regist(){
    string clothesName, companyName;
    int price, amount;
    readFile >> clothesName >> companyName >> price >> amount;
    sellingClothesCollection.memberSellingClothes[num++] = registerSellingClothesUI.addSellingClothes(clothesName, companyName, price, amount, userID);
    sellingClothesCollection.clothesNum++;
    string str = "3.1. 판매 의류 등록\n";
    str+= ("> " + clothesName + " " + companyName + " " + to_string(price) + " " + to_string(amount));
    writeFile << str;
    writeFile << "\n";
}

void listing(){
    string str = "3.2. 등록상품조회\n";
    str += "> ";
    str+= listSellingClothesUI.showSellingClothesList(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}

void listingSoldout(){
    string str = "3.3. 판매 완료 상품 조회\n";
    str += "> ";
    str+= l1stSoldoutClothesUI.showSoldoutList(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}

void printStatistics(){
    string str = "5.1. 판매 상품 통계\n";
    str += "> ";
    str+= printSoldStatisticsUI.getSoldStatistics(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}


void program_exit()
{
	return;
}