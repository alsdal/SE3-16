#pragma once
#include "Logout.h"
using namespace std;

// Class : LogoutUI
// Description : 회원 로그아웃 UI 클래스
class LogoutUI
{
private:
	Logout logoutMember;
public:
	LogoutUI();
	string logout(string memberID, MemberList memberListMain);
};
