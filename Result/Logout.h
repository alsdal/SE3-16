#pragma once

#include <iostream>
using namespace std;

#include "MemberList.h"


class Logout
{
private:
	MemberList memberList;
public:
	Logout();
	string logoutMember(string memberID, MemberList memberListMain);
};

