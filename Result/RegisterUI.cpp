#include "RegisterUI.h"
#include "Register.h"
#include <iostream>
using namespace std;


RegisterUI::RegisterUI()
{

}


// Function : enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: 새 회원정보 등록
// Parameters : string memberName - 회원 이름
//				string memberRegNumber - 회원 주민번호
//				string memberID - 회원 아이디
//				string memberPassword - 회원 비밀번호
// Return Value : 새로 등록한 회원 정보
Member * RegisterUI::enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return registerMember.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}
