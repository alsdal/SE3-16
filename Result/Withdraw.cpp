#include "Withdraw.h"


Withdraw::Withdraw()
{
}

// Function : withdrawMember(string memberID, MemberList memberListMain)
// Description: ȸ�� Ż�� ���
// Parameters :	string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ��ġ�ϴ� ȸ�� ���̵�
string Withdraw::withdrawMember(string memberID, MemberList memberListMain)
{
	return memberList.checkID(memberID, memberListMain);
}
