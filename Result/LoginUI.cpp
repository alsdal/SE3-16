#include <iostream>
#include "LoginUI.h"
#include "Login.h"
using namespace std;


LoginUI::LoginUI()
{
}


// Function : login(string memberID, string memberPassword, MemberList memberListMain)
// Description: ȸ�� �α���
// Parameters : string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
//				MemberList memberListMain - ȸ�� ���
// Return Value : ȸ�� ���̵�, ��й�ȣ ��ġ ����
bool LoginUI::login(string memberID, string memberPassword, MemberList memberListMain)
{
	return loginMember.loginMember(memberID, memberPassword, memberListMain);
}
