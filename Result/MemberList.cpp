#include "MemberList.h"
#include "Member.h"

MemberList::MemberList()
{
}

Member * MemberList::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	memberList[0] = new Member(memberName, memberRegNumber, memberID, memberPassword);
	return memberList[0];
}

