#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Login
// Description : ȸ�� �α��� Ŭ����
class Login
{
private:
	MemberList memberList;
public:
	Login();
	bool loginMember(string memberID, string memberPassword, MemberList memberListMain);
};

