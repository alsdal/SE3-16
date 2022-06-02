#include "WithdrawUI.h"
#include "Withdraw.h"
#include <iostream>
using namespace std;

WithdrawUI::WithdrawUI()
{
}

// Function : withdraw(string memberID, MemberList memberListMain)
// Description: 회원 탈퇴 기능
// Parameters :	string memberID - 회원 아이디
//				MemberList memberListMain - 회원 목록
// Return Value : 일치하는 회원 아이디
string WithdrawUI::withdraw(string memberID, MemberList memberListMain)
{
	return withdrawMember.withdrawMember(memberID, memberListMain);
}
