#include "Login.h"
#include <string>

Login::Login()
{
}

bool Login::loginMember(string memberID, string memberPassword)
{
	return memberList.checkIDPW(memberID, memberPassword);
}
