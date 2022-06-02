#include <iostream>
using namespace std;
#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI()
{
}

string LogoutUI::logout(string memberID, MemberList memberListMain)
{
	return logoutMember.logoutMember(memberID, memberListMain);
}
