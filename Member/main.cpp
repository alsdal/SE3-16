// ��� ����
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "./RegisterUI.h"
#include "./Register.h"
#include "./LoginUI.h"

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
void program_exit();
int num = 0;
bool Log = false;
MemberList memberList;
RegisterUI registerUI;
LoginUI loginUI;


// ���� ����
ifstream readFile;
ofstream writeFile;

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

	writeFile << "2.1 �α���" << endl;
	writeFile << "> ";


	return;
}

void logoutMem() {
	writeFile << "2.2 �α׾ƿ�" << endl;
	writeFile << "> ";

	return;
}

void program_exit()
{
	return;
}