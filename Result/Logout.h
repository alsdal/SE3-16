#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Logout
// Description : ȸ�� �α׾ƿ� Ŭ����
class Logout
{
private:
	MemberList memberList;
public:
	Logout();
	string logoutMember(string memberID, MemberList memberListMain);
};

