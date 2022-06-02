#pragma once
#include <iostream>
#include "Member.h"
using namespace std;


// Class : MemberList
// Description : 회원 목록 클래스
class MemberList
{
private:
public:
	MemberList();
	int memberNum = 0;
	Member* memberList[10];
	Member* addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
	bool checkIDPW(string memberID, string memberPassword, MemberList memberListMain);
	string checkID(string memberID, MemberList memberListMain);
	void deleteMember(string memberID, MemberList memberListMain);
};