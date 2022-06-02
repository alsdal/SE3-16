#include "MemberList.h"
#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

MemberList::MemberList()
{
}


// Function : addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: 새 회원 등록
// Parameters : string memberName - 회원 이름
//				string memberRegNumber - 회원 주민번호
//				string memberID - 회원 아이디
//				string memberPassword - 회원 비밀번호
// Return Value : 새로 등록한 회원 정보
Member * MemberList::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	memberList[memberNum] = new Member(memberName, memberRegNumber, memberID, memberPassword);
	return memberList[memberNum++];
}

// Function : checkIDPW(string memberID, string memberPassword, MemberList memberListMain)
// Description: 회원 아이디, 비밀번호 일치 여부 확인
// Parameters : string memberID - 회원 아이디
//				string memberPassword - 회원 비밀번호
//				MemberList memberListMain - 회원 목록
// Return Value : 회원 아이디, 비밀번호 일치 여부
bool MemberList::checkIDPW(string memberID, string memberPassword, MemberList memberListMain)
{
	for (int i = 0; i < memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID() && memberPassword == memberListMain.memberList[i]->getMemberPW())
		{
			return true;
		}
	}
	return false;
}

// Function : checkID(string memberID, MemberList memberListMain)
// Description: 일치하는 회원 아이디 불러오기
// Parameters : string memberID - 회원 아이디
//				MemberList memberListMain - 회원 목록
// Return Value : 일치하는 회원 아이디
string MemberList::checkID(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			return memberListMain.memberList[i]->getMemberID();
		}
	}
}

// Function : deleteMember(string memberID, MemberList memberListMain)
// Description: 회원 삭제하기
// Parameters : string memberID - 회원 아이디
//				MemberList memberListMain - 회원 목록
// Return Value : 없음
void MemberList::deleteMember(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			delete memberListMain.memberList[i];
		}
	}
}
