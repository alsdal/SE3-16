#include "Logout.h"

Logout::Logout()
{
}

string Logout::logoutMember(string memberID, MemberList memberListMain)
{
	return memberList.checkID(memberID, memberListMain);
}
