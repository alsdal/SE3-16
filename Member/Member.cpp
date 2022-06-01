#include "Member.h"
#include <string>

Member::Member()
{
	memberName = ' ';
	memberRegNumber = ' ' ;
	memberID= ' ';
	memberPassword = ' ';
}

Member::Member(string memberName, string memberRegNumber, string memberID, string memberPassword) {
	this->memberName = memberName;
	this->memberRegNumber = memberRegNumber;
	this->memberID = memberID;
	this->memberPassword = memberPassword;
};

void Member::createMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{

}

string Member::getMember()
{
	return this->memberName;
}

void Member::deleteMember()
{
	return;
}

void Member::logoutMember()
{
	return;
}
