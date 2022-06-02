// ��� ����
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

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
bool program_exit();
void regist(string clothesName, string companyName, int price, int amount, string UserID);

//���� ����
ifstream readFile(INPUT_FILE_NAME);
ofstream writeFile(OUTPUT_FILE_NAME);

SellingClothesCollection sellingClothesCollection;
RegisterSellingClothesUI registerSellingClothesUI;
ItemPurchaseListView purchaseListView;
ItemPurchaseList purchaseList;
ItemPurchase itempurchase;

int num = 0;

string userID = "mbc";
string clothname;

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
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// �Է� ���Ͽ��� �޴� ���� 2���� �б�
		string str;
		getline(readFile, str);
		istringstream ss(str);
		vector<string> menu;
		string stringBuffer;
		menu.clear();

		while (getline(ss, stringBuffer, ' ')) {
			menu.push_back(stringBuffer);
		}

		menu_level_1 = stoi(menu[0]);
		menu_level_2 = stoi(menu[1]);
		
		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
			case 1:	
			{
				switch (menu_level_2)
				{
					case 1: // "1.1. ȸ������" �޴� �κ�
					{
						// join() �Լ����� �ش� ��� ����
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
					//�Ǹ� �Ƿ� ���, (��ǰ��, ����ȸ���, ����, ����)
				case 1:
				{
					regist(menu[2], menu[3], stoi(menu[4]), stoi(menu[5]), userID);
					break;
				}
				//��� ��ǰ ��ȸ
				case 2:
				{
					//listing();
					break;
				}
				//�Ǹ� �Ϸ� ��ǰ ��ȸ
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
						// ��ǰ���� �˻�
						// ��ǰ�� �Է�

						writeFile << "4.1. ��ǰ ���� �˻�\n";
						clothname = menu[2];

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
						menu[2] = evaluation;

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
					case 1: // "6.1. ����" �޴� �κ�
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

	// �Է� ����: �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
	//fscanf_s(in_fp, "%s %s %s %s", name, MAX_STRING, SSN, MAX_STRING, ID, MAX_STRING, password, MAX_STRING);

	// �ش� ��� ����

	//��� ����
	//fprintf(out_fp, "1.1. ȸ������\n");
	//fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void regist(string clothesName, string companyName, int price, int amount, string UserID) {
	sellingClothesCollection.memberSellingClothes[num++] = registerSellingClothesUI.addSellingClothes(clothesName, companyName, price, amount, UserID);
	sellingClothesCollection.clothesNum++;
	string str = "3.1. �Ǹ� �Ƿ� ���\n";
	str += ("> " + clothesName + " " + companyName + " " + to_string(price) + " " + to_string(amount));
	writeFile << str;
	writeFile << "\n";
}

bool program_exit()
{
	return true;
}