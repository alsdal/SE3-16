// 헤더 선언
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "./RegisterUI.h"
#include "./Register.h"
#include "./LoginUI.h"
#include "./MemberList.h"
#include "./LogoutUI.h"
#include "./WithdrawUI.h"

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
void program_exit();


// 변수 선언
ifstream readFile;
ofstream writeFile;

int num = 0;
string userID = "NULL";
MemberList memberListMain;
RegisterUI registerUI;
LoginUI loginUI;
LogoutUI logoutUI;
WithdrawUI withdrawUI;

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
			break;

			}
		}
	}
}


void registerMem()
{
	char name[MAX_STRING], regNum[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
	readFile >> name >> regNum >> ID >> password;
	memberListMain.memberList[num++] = registerUI.enterInfo(name,regNum,ID,password);
	memberListMain.memberNum++;
	writeFile << "1.1 회원가입" << endl;
	writeFile << "> " << name << " " << regNum << " " << ID << " " << password << endl;

}

void withdrawMem()
{
	if (userID != "NULL") {
		writeFile << "1.2 회원탈퇴" << endl;
		writeFile << "> " << withdrawUI.withdraw(userID, memberListMain) << endl;
		memberListMain.deleteMember(userID,memberListMain);

		userID = "NULL";
	}
	else {
		writeFile << "1.2 회원탈퇴" << endl;
		writeFile << "> 로그인 해주세요" << endl;
	}
}

void loginMem(){
	char ID[MAX_STRING], password[MAX_STRING];
	readFile >> ID >> password;

	if (loginUI.login(ID, password, memberListMain)==true) {
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

void program_exit()
{
	writeFile << "6.1 종료";
	return;
}