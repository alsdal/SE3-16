#include <string>
#include "Register.h"
#include "MemberList.h"

Register::Register()
{
}

Member * Register::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return memberList.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}

