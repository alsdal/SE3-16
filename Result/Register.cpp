#include <string>
#include "Register.h"
#include "MemberList.h"

Register::Register()
{
}

// Function : addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: �� ȸ�� ���
// Parameters : string memberName - ȸ�� �̸�
//				string memberRegNumber - ȸ�� �ֹι�ȣ
//				string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
// Return Value : ���� ����� ȸ�� ����
Member * Register::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return memberList.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}

