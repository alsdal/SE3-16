#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Login
// Description : 회원 로그인 클래스
class Login
{
private:
	MemberList memberList;
public:
	Login();
	bool loginMember(string memberID, string memberPassword, MemberList memberListMain);
};

