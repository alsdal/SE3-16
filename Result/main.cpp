// ��� ����
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "./RegisterUI.h"
#include "./Register.h"
#include "./LoginUI.h"
#include "./Boundary/RegisterSellingClothesUI.h"
#include "./Boundary/ListSellingClothesUI.h"
#include "./Boundary/ListSoldoutClothesUI.h"
#include "./Boundary/PrintSoldStatisticsUI.h"
#include "./Entity/SellingClothesCollection.h"
#include "ItemSearch.h"
#include "ItemPurchase.h"
#include "ItemPurchaseListView.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
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
MemberList memberList;
RegisterUI registerUI;
LoginUI loginUI;
SellingClothesCollection sellingClothesCollection;
RegisterSellingClothesUI registerSellingClothesUI;
ListSellingClothesUI listSellingClothesUI;
ListSoldoutClothesUI l1stSoldoutClothesUI;
PrintSoldStatisticsUI printSoldStatisticsUI;
ItemPurchaseListView purchaseListView;
ItemPurchaseList purchaseList;
ItemPurchase itempurchase;
ItemSearch itemsearch;

// ���� ����
ifstream readFile;
ofstream writeFile;
string userID = "NULL";
int num = 0;
bool Log = false;

int main() 
{
	// ���� ������� ���� �ʱ�ȭ
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
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (is_program_exit == 0)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		readFile >> menu_level_1 >> menu_level_2;

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:		// 1.1 ȸ������
			{
				registerMem();
				break;
			}
			case 2:		// 1.2 ȸ��Ż��
			{
				withdrawMem();
				break;
			}
			}
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:		// 2.1 �α���
			{
				loginMem();
				break;
			}
			case 2:		// 2.2 �α׾ƿ�
			{
				logoutMem();
				break;
			}
			}
		}
		case 3:
            {
                switch(menu_level_2)
                {
                    //�Ǹ� �Ƿ� ���, (��ǰ��, ����ȸ���, ����, ����)
                    case 1:
                    {
                        regist();
                        break;
                    }
                    //��� ��ǰ ��ȸ
                    case 2:
                    {
                        listing();
                        break;
                    }
                    //�Ǹ� �Ϸ� ��ǰ ��ȸ
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
					// ��ǰ�� �Է�
					writeFile << "4.1. ��ǰ ���� �˻�\n";
					readFile >> clothname;
					// ��ǰ���� �˻�
					ItemSearch itemsearch;
					writeFile << "> " << itemsearch.searchItem(sellingClothesCollection, clothname) << endl;

					break;

				}
				case 2:
				{
					// ��ǰ ����
					printf("4.2\n");
					writeFile << "4.2. ��ǰ ����\n";
					writeFile << "> " << itempurchase.purchaseItem(&purchaseList, sellingClothesCollection, clothname) << endl;

					break;
				}
				case 3:
				{
					// ��ǰ ���� ���� ��ȸ
					printf("4.3\n");
					writeFile << "4.3. ��ǰ ���� ���� ��ȸ\n";
					writeFile << "> " << purchaseListView.checkPurchaseList(&purchaseList) << endl;

					break;
				}
				case 4:
				{
					// ��ǰ ���Ÿ����� ��
					// ���Ÿ����� �Է�
					int evaluation = 0;
					printf("4.4\n");
					writeFile << "4.4 ��ǰ ���Ÿ����� ��\n";
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
			case 1:   // "6.1. ���ᡰ �޴� �κ�
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
	memberList.memberList[num++] = registerUI.enterInfo(name,regNum,ID,password);

	writeFile << "1.1 ȸ������" << endl;
	writeFile << "> " << name << " " << regNum << " " << ID << " " << password << endl;

	return;
}

void withdrawMem()
{
	writeFile << "1.2 ȸ��Ż��" << endl;
	writeFile << "> ";

	return;
}
void loginMem(){
	char ID[MAX_STRING], password[MAX_STRING];
	readFile >> ID >> password;

	Log = loginUI.login(ID, password);
	userID = ID;

	writeFile << "2.1 �α���" << endl;
	writeFile << "> ";


	return;
}

void logoutMem() {
	writeFile << "2.2 �α׾ƿ�" << endl;
	writeFile << "> ";

	return;
}

//���� ���̵� �ִ°� �ؾ��ҵ�
void regist(){
    string clothesName, companyName;
    int price, amount;
    readFile >> clothesName >> companyName >> price >> amount;
    sellingClothesCollection.memberSellingClothes[num++] = registerSellingClothesUI.addSellingClothes(clothesName, companyName, price, amount, userID);
    sellingClothesCollection.clothesNum++;
    string str = "3.1. �Ǹ� �Ƿ� ���\n";
    str+= ("> " + clothesName + " " + companyName + " " + to_string(price) + " " + to_string(amount));
    writeFile << str;
    writeFile << "\n";
}

void listing(){
    string str = "3.2. ��ϻ�ǰ��ȸ\n";
    str += "> ";
    str+= listSellingClothesUI.showSellingClothesList(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}

void listingSoldout(){
    string str = "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ\n";
    str += "> ";
    str+= l1stSoldoutClothesUI.showSoldoutList(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}

void printStatistics(){
    string str = "5.1. �Ǹ� ��ǰ ���\n";
    str += "> ";
    str+= printSoldStatisticsUI.getSoldStatistics(sellingClothesCollection);
    writeFile << str;
    writeFile << "\n";
}


void program_exit()
{
	return;
}