#include "Logout.h"

Logout::Logout()
{
}


// Function : logoutMember(string memberID, MemberList memberListMain)
// Description: ȸ�� �α׾ƿ�
// Parameters : string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ��ġ�ϴ� ȸ�� ���̵�
string Logout::logoutMember(string memberID, MemberList memberListMain)
{
	return memberList.checkID(memberID, memberListMain);
}
