#include "WithdrawUI.h"
#include "Withdraw.h"
#include <iostream>
using namespace std;

WithdrawUI::WithdrawUI()
{
}

// Function : withdraw(string memberID, MemberList memberListMain)
// Description: ȸ�� Ż�� ���
// Parameters :	string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ��ġ�ϴ� ȸ�� ���̵�
string WithdrawUI::withdraw(string memberID, MemberList memberListMain)
{
	return withdrawMember.withdrawMember(memberID, memberListMain);
}
