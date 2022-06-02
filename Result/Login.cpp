#include "Login.h"
#include <string>

Login::Login()
{
}


// Function : loginMember(string memberID, string memberPassword, MemberList memberListMain)
// Description: 회원 로그인
// Parameters : string memberID - 회원 아이디
//				string memberPassword - 회원 비밀번호
//				MemberList memberListMain - 회원 목록
// Return Value : 회원 아이디, 비밀번호 일치 여부
bool Login::loginMember(string memberID, string memberPassword, MemberList memberListMain)
{
	return memberList.checkIDPW(memberID, memberPassword, memberListMain);
}


