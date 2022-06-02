#pragma once
#include "Withdraw.h"
using namespace std;

// Class : WithdrawUI
// Description : È¸¿øÅ»Åð UI Å¬·¡½º

class WithdrawUI
{
private:
	Withdraw withdrawMember;
public:
	WithdrawUI();
	string withdraw(string memberID, MemberList memberListMain);
};
