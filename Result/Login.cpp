#include "Login.h"
#include <string>

Login::Login()
{
}


// Function : loginMember(string memberID, string memberPassword, MemberList memberListMain)
// Description: ȸ�� �α���
// Parameters : string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
//				MemberList memberListMain - ȸ�� ���
// Return Value : ȸ�� ���̵�, ��й�ȣ ��ġ ����
bool Login::loginMember(string memberID, string memberPassword, MemberList memberListMain)
{
	return memberList.checkIDPW(memberID, memberPassword, memberListMain);
}


