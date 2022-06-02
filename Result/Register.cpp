#include <string>
#include "Register.h"
#include "MemberList.h"

Register::Register()
{
}

// Function : addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: 새 회원 등록
// Parameters : string memberName - 회원 이름
//				string memberRegNumber - 회원 주민번호
//				string memberID - 회원 아이디
//				string memberPassword - 회원 비밀번호
// Return Value : 새로 등록한 회원 정보
Member * Register::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return memberList.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}

