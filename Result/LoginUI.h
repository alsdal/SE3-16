#pragma once
#include "Login.h"
using namespace std;

// Class : LoginUI
// Description : ȸ�� �α��� UI Ŭ����
class LoginUI
{
private:
	Login loginMember;
public:
	LoginUI();
	bool login(string memberID, string memberPassword,MemberList memberListMain);
};
