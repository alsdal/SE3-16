#pragma once
#include "Withdraw.h"
using namespace std;

// Class : WithdrawUI
// Description : ȸ��Ż�� UI Ŭ����

class WithdrawUI
{
private:
	Withdraw withdrawMember;
public:
	WithdrawUI();
	string withdraw(string memberID, MemberList memberListMain);
};
