// ��� ����
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
#include "RegisterSellingClothesUI.h"
#include "ListSellingClothesUI.h"
#include "ListSoldoutClothesUI.h"
#include "PrintSoldStatisticsUI.h"
#include "SellingClothesCollection.h"
#include "ItemSearchUI.h"
#include "ItemPurchaseUI.h"
#include "ItemPurchaseListViewUI.h"

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
ItemPurchaseListViewUI purchaseListView_UI;
ItemPurchaseList purchaseList;
ItemPurchaseUI itempurchase_UI;
ItemSearchUI itemsearch_UI;

// ���� ����
ifstream readFile;
ofstream writeFile;
string clothname;
string userID = "NULL";
int num = 0;
int numMem = 0;
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
			break;
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
			break;

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
					// ��ǰ���� �˻�
					// ��ǰ�� �Է�

					writeFile << "4.1. ��ǰ ���� �˻�\n";
					readFile >> clothname;

					writeFile << "> " << itemsearch_UI.inputItemName(sellingClothesCollection, clothname) << endl;

					break;
				}
				case 2:
				{
					// ��ǰ ����
					
					writeFile << "4.2. ��ǰ ����\n";
					writeFile << "> " << itempurchase_UI.selectPurchase(&purchaseList, sellingClothesCollection, clothname) << endl;

					break;
				}
				case 3:
				{
					// ��ǰ ���� ���� ��ȸ
					
					writeFile << "4.3. ��ǰ ���� ���� ��ȸ\n";
					writeFile << "> " << purchaseListView_UI.selectPurchaseList(&purchaseList) << endl;

					break;
				}
				case 4:
				{
					// ��ǰ ���Ÿ����� ��
						// ���Ÿ����� �Է�
					int evaluation = 0;
					
					writeFile << "4.4 ��ǰ ���Ÿ����� ��\n";
					readFile >> evaluation;

					writeFile << purchaseListView_UI.inputSatisfaction(&purchaseList, sellingClothesCollection, clothname, evaluation) << endl;

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
	memberListMain.memberList[numMem++] = registerUI.enterInfo(name, regNum, ID, password);
	memberListMain.memberNum++;
	writeFile << "1.1 ȸ������" << endl;
	writeFile << "> " << name << " " << regNum << " " << ID << " " << password << endl;

}

void withdrawMem()
{
	if (userID != "NULL") {
		writeFile << "1.2 ȸ��Ż��" << endl;
		writeFile << "> " << withdrawUI.withdraw(userID, memberListMain) << endl;
		memberListMain.deleteMember(userID, memberListMain);

		userID = "NULL";
	}
	else {
		writeFile << "1.2 ȸ��Ż��" << endl;
		writeFile << "> �α��� ���ּ���" << endl;
	}
}

void loginMem() {
	char ID[MAX_STRING], password[MAX_STRING];
	readFile >> ID >> password;

	if (loginUI.login(ID, password, memberListMain) == true) {
		writeFile << "2.1 �α���" << endl;
		writeFile << "> " << ID << " " << password << endl;
		userID = ID;
	}
	else {
		writeFile << "2.1 �α���" << endl;
		writeFile << "> ����" << endl;
	}
}

void logoutMem() {
	if (userID != "NULL") {
		writeFile << "2.2 �α׾ƿ�" << endl;
		writeFile << "> " << logoutUI.logout(userID, memberListMain) << endl;
		userID = "NULL";
	}
	else {
		writeFile << "2.2 �α׾ƿ�" << endl;
		writeFile << "> �α��� ���ּ���" << endl;
	}
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
	writeFile << "6.1 ����" << endl;
	return;
}