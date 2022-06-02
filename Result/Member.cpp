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

// Function : getMemberID()
// Description: 회원 아이디 불러오기
// Return Value : 회원 아이디
string Member::getMemberID()
{
	return this->memberID;
}

// Function : getMemberPW()
// Description: 회원 비밀번호 불러오기
// Return Value : 회원 비밀번호
string Member::getMemberPW()
{
	return this->memberPassword;
}