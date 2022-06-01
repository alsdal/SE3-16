#pragma once

#include <iostream>
using namespace std;

#include "MemberList.h"


class Register
{
private:
	MemberList memberList;
public:
	Register();
	Member* addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
};

