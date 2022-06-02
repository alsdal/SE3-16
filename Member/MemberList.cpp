#include "MemberList.h"
#include "Member.h"
#include <iostream>
#include <string>

using namespace std;

MemberList::MemberList()
{
}

Member * MemberList::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	memberList[memberNum] = new Member(memberName, memberRegNumber, memberID, memberPassword);
	return memberList[memberNum++];
}

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

string MemberList::checkID(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			return memberListMain.memberList[i]->getMemberID();
		}
	}
}

void MemberList::deleteMember(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			delete memberListMain.memberList[i];
		}
	}
}
