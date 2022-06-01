#include <iostream>
using namespace std;
#include "LoginUI.h"
#include "Login.h"

LoginUI::LoginUI()
{
}

bool LoginUI::login(string memberID, string memberPassword)
{
	return loginMember.loginMember(memberID, memberPassword);
}
