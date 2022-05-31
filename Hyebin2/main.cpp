#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


#include "./Boundary/RegisterSellingClothesUI.h"
#include "./Boundary/ListSellingClothesUI.h"
#include "./Boundary/ListSoldoutClothesUI.h"
#include "./Boundary/PrintSoldStatisticsUI.h"
#include "./Entity/SellingClothesCollection.h"


#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//함수 선언
void doTask();
void join();
void regist(string, string, int, int, string);
void listing();
void listingSoldout();
void printStatistics();
bool program_exit();

//변수선언
ifstream readFile(INPUT_FILE_NAME);
ofstream writeFile(OUTPUT_FILE_NAME);
int num = 0;
SellingClothesCollection sellingClothesCollection;
RegisterSellingClothesUI registerSellingClothesUI;
ListSellingClothesUI listSellingClothesUI;
ListSoldoutClothesUI l1stSoldoutClothesUI;
PrintSoldStatisticsUI printSoldStatisticsUI;

string userID = "SEUser";


int main()
{
	if (!readFile)
	{
		perror("error fopen input.txt");
		return 0;
	}

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
	bool is_program_exit = false;
	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
        string str;
		getline(readFile, str);
        istringstream ss(str);
        vector<string> menu;
        string stringBuffer;
        menu.clear();

        while(getline(ss, stringBuffer, ' ')){
            menu.push_back(stringBuffer);
        }

        menu_level_1 = stoi(menu[0]); 
        menu_level_2 = stoi(menu[1]);
		
		//  메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
			case 1:	
			{
				switch (menu_level_2)
				{
					case 1: 
					{
						join();

						break;
					}
					default:
						break;
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
                        cout<< menu[2] << " " << menu[3] <<" "<< menu[4] << " " <<menu[5] << endl;
                        cout << "3.1 process" <<endl;
                        regist(menu[2] ,menu[3],  stoi(menu[4]), stoi(menu[5]),userID);
                        break;
                    }
                    //등록 상품 조회
                    case 2:
                    {
                        cout << "3.2 process" <<endl;
                        listing();
                        break;
                    }
                    //판매 완료 상품 조회
                    case 3:
                    {
                        cout << "3.3 process" <<endl;
                        listingSoldout();
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            case 5:{
                switch (menu_level_2)
                {
                case 1:
                    printStatistics();
                    break;
                
                default:
                    break;
                }
                break;
            }
            case 6:
            {
                switch (menu_level_2)
                {
                case 1:
                cout << "6.1" << endl;
                    is_program_exit = program_exit();
                    break;
                
                default:
                    break;

                }
                break;
            }
		}
	}
	return;
}

void join()
{
	string user_type, name, SSN,
		address, ID, password;

	// 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
	//fscanf_s(in_fp, "%s %s %s %s", name, MAX_STRING, SSN, MAX_STRING, ID, MAX_STRING, password, MAX_STRING);

	// / 해당 기능 수행

	// 출력 형식
	//writeFile.write()
	//fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

//유저 아이디 넣는거 해야할듯
void regist(string clothesName, string companyName, int price, int amount, string UserID){
    sellingClothesCollection.memberSellingClothes[num++] = registerSellingClothesUI.addSellingClothes(clothesName, companyName, price, amount, userID);
    sellingClothesCollection.clothesNum++;
    string str = "3.1. 판매 의류 등록\n";
    str+= ("> " + clothesName + " " + companyName + " " + to_string(price) + " " + to_string(amount));
    writeFile << str;
    writeFile << "\n";
}

void listing(){
    // cout << listSellingClothesUI.showSellingClothesList(sellingClothesCollection) << endl;
    string str = "3.2. 등록상품조회\n";
    str += "> ";
    str+= listSellingClothesUI.showSellingClothesList(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}

void listingSoldout(){
    //cout << l1stSoldoutClothesUI.showSoldoutList(sellingClothesCollection) <<  endl;
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

bool program_exit()
{
 return true;
}

