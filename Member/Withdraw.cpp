#include "Withdraw.h"


Withdraw::Withdraw()
{
}

string Withdraw::withdrawMember(string memberID, MemberList memberListMain)
{
	return memberList.checkID(memberID, memberListMain);
}
