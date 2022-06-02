#pragma once
#include "Login.h"
using namespace std;

// Class : LoginUI
// Description : 회원 로그인 UI 클래스
class LoginUI
{
private:
	Login loginMember;
public:
	LoginUI();
	bool login(string memberID, string memberPassword,MemberList memberListMain);
};
