#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Register
// Description : ȸ������ Ŭ����
class Register
{
private:
	MemberList memberList;
public:
	Register();
	Member* addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
};

