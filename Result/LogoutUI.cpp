#include <iostream>
#include "LogoutUI.h"
#include "Logout.h"
using namespace std;

LogoutUI::LogoutUI()
{
}

// Function : logout(string memberID, MemberList memberListMain)
// Description: 회원 로그아웃
// Parameters : string memberID - 회원 아이디
//				MemberList memberListMain - 회원 목록
// Return Value : 일치하는 회원 아이디
string LogoutUI::logout(string memberID, MemberList memberListMain)
{
	return logoutMember.logoutMember(memberID, memberListMain);
}
