#pragma once

#include <iostream>
using namespace std;

#include "MemberList.h"


class Login
{
private:
	MemberList memberList;
public:
	Login();
	bool loginMember(string memberID, string memberPassword, MemberList memberListMain);
};

