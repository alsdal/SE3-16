// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include "ItemSearch.h"
#include "ItemPurchase.h"
#include "ItemPurchaseListView.h"
#include "SellingClothesCollection.h"
#include "RegisterSellingClothesUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
bool program_exit();
void regist(string clothesName, string companyName, int price, int amount, string UserID);

//변수 선언
ifstream readFile;
ofstream writeFile;

SellingClothesCollection sellingClothesCollection;
RegisterSellingClothesUI registerSellingClothesUI;
ItemPurchaseListView purchaseListView;
ItemPurchaseList purchaseList;
ItemPurchase itempurchase;
ItemSearch itemsearch;

int num = 0;

string userID = "mbc";
string clothname;

int main()
{
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
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// 입력 파일에서 메뉴 숫자 2개를 읽기
		readFile >> menu_level_1 >> menu_level_2;
		
		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
			case 1:	
			{
				switch (menu_level_2)
				{
					case 1: // "1.1. 회원가입" 메뉴 부분
					{
						// join() 함수에서 해당 기능 수행
						join();

						break;
					}
					default:
						break;
				}
			}
			case 3:
			{
				switch (menu_level_2)
				{
					//판매 의류 등록, (상품명, 제작회사명, 가격, 수량)
				case 1:
				{
					string clothesName, companyName;
					int price, amount;
					readFile >> clothesName >> companyName >> price >> amount;
					regist(clothesName, companyName, price, amount, userID);
					break;
				}
				//등록 상품 조회
				case 2:
				{
					//listing();
					break;
				}
				//판매 완료 상품 조회
				case 3:
				{
					//listingSoldout();
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
						// 상품정보 검색
						// 상품명 입력

						writeFile << "4.1. 상품 정보 검색\n";
						readFile >> clothname;

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
			case 6:
			{
				switch (menu_level_2)
				{
					case 1: // "6.1. 종료" 메뉴 부분
					{
						program_exit();
						is_program_exit = 1;
						break;
					}
					default:
						break;
				}
			}
		}
	}
	return;
}

void join()
{
	//char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
	//	address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

	// 입력 형식: 이름, 주민번호, ID, Password를 파일로부터 읽음
	//fscanf_s(in_fp, "%s %s %s %s", name, MAX_STRING, SSN, MAX_STRING, ID, MAX_STRING, password, MAX_STRING);

	// 해당 기능 수행

	//출력 형식
	//fprintf(out_fp, "1.1. 회원가입\n");
	//fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void regist(string clothesName, string companyName, int price, int amount, string UserID)
{
	sellingClothesCollection.memberSellingClothes[num++] = registerSellingClothesUI.addSellingClothes(clothesName, companyName, price, amount, UserID);
	sellingClothesCollection.clothesNum++;
	string str = "3.1. 판매 의류 등록\n";
	str += ("> " + clothesName + " " + companyName + " " + to_string(price) + " " + to_string(amount));
	writeFile << str;
	writeFile << "\n";
}


bool program_exit()
{
	return true;
}