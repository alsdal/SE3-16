#pragma once
#include "Logout.h"
using namespace std;

// Class : LogoutUI
// Description : ȸ�� �α׾ƿ� UI Ŭ����
class LogoutUI
{
private:
	Logout logoutMember;
public:
	LogoutUI();
	string logout(string memberID, MemberList memberListMain);
};
