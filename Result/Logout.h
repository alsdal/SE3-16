#pragma once
#include <iostream>
#include "MemberList.h"
using namespace std;


// Class : Logout
// Description : 회원 로그아웃 클래스
class Logout
{
private:
	MemberList memberList;
public:
	Logout();
	string logoutMember(string memberID, MemberList memberListMain);
};

