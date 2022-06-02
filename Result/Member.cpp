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
// Description: ȸ�� ���̵� �ҷ�����
// Return Value : ȸ�� ���̵�
string Member::getMemberID()
{
	return this->memberID;
}

// Function : getMemberPW()
// Description: ȸ�� ��й�ȣ �ҷ�����
// Return Value : ȸ�� ��й�ȣ
string Member::getMemberPW()
{
	return this->memberPassword;
}