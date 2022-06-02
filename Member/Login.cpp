#include "Login.h"
#include <string>

Login::Login()
{
}

bool Login::loginMember(string memberID, string memberPassword, MemberList memberListMain)
{
	return memberList.checkIDPW(memberID, memberPassword, memberListMain);
}
