#include <iostream>
using namespace std;
#include "LoginUI.h"
#include "Login.h"

LoginUI::LoginUI()
{
}

bool LoginUI::login(string memberID, string memberPassword, MemberList memberListMain)
{
	return loginMember.loginMember(memberID, memberPassword, memberListMain);
}
