#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Register
// Description : 회원가입 클래스
class Register
{
private:
	MemberList memberList;
public:
	Register();
	Member* addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
};

