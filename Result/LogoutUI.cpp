#include <iostream>
#include "LogoutUI.h"
#include "Logout.h"
using namespace std;

LogoutUI::LogoutUI()
{
}

// Function : logout(string memberID, MemberList memberListMain)
// Description: ȸ�� �α׾ƿ�
// Parameters : string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ��ġ�ϴ� ȸ�� ���̵�
string LogoutUI::logout(string memberID, MemberList memberListMain)
{
	return logoutMember.logoutMember(memberID, memberListMain);
}
