#pragma once

using namespace std;

#include "Logout.h"

class LogoutUI
{
private:
	Logout logoutMember;
public:
	LogoutUI();
	string logout(string memberID, MemberList memberListMain);
};
