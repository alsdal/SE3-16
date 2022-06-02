#pragma once

using namespace std;

#include "Withdraw.h"

class WithdrawUI
{
private:
	Withdraw withdrawMember;
public:
	WithdrawUI();
	string withdraw(string memberID, MemberList memberListMain);
};
