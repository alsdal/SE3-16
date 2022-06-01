#pragma once

#include <iostream>
using namespace std;

#include "Member.h"

class MemberList
{
private:
public:
	int memberNum;
	MemberList();
	Member* memberList[10];
	Member* addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
	bool checkIDPW(string memberID, string memberPassword);

};