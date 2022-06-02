#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;

// Class : Withdraw
// Description : È¸¿øÅ»Åð Å¬·¡½º

class Withdraw
{
private:
	MemberList memberList;
public:
	Withdraw();
	string withdrawMember(string memberID, MemberList memberListMain);
};

