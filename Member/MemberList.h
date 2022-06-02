#pragma once

#include <iostream>
using namespace std;

#include "Member.h"

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