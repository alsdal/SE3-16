#pragma once

#include <iostream>
using namespace std;

#include "MemberList.h"


class Withdraw
{
private:
	MemberList memberList;
public:
	Withdraw();
	string withdrawMember(string memberID, MemberList memberListMain);
};

