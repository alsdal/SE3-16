#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;

// Class : Withdraw
// Description : ȸ��Ż�� Ŭ����

class Withdraw
{
private:
	MemberList memberList;
public:
	Withdraw();
	string withdrawMember(string memberID, MemberList memberListMain);
};

