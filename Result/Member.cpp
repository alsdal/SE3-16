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


string Member::getMemberID()
{
	return this->memberID;
}

string Member::getMemberPW()
{
	return this->memberPassword;
}