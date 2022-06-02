#include "WithdrawUI.h"
#include "Withdraw.h"
#include <iostream>
using namespace std;

WithdrawUI::WithdrawUI()
{
}

string WithdrawUI::withdraw(string memberID, MemberList memberListMain)
{
	return withdrawMember.withdrawMember(memberID, memberListMain);
}
