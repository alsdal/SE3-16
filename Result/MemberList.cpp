#include "MemberList.h"
#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

MemberList::MemberList()
{
}


// Function : addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: �� ȸ�� ���
// Parameters : string memberName - ȸ�� �̸�
//				string memberRegNumber - ȸ�� �ֹι�ȣ
//				string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
// Return Value : ���� ����� ȸ�� ����
Member * MemberList::addNewMember(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	memberList[memberNum] = new Member(memberName, memberRegNumber, memberID, memberPassword);
	return memberList[memberNum++];
}

// Function : checkIDPW(string memberID, string memberPassword, MemberList memberListMain)
// Description: ȸ�� ���̵�, ��й�ȣ ��ġ ���� Ȯ��
// Parameters : string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
//				MemberList memberListMain - ȸ�� ���
// Return Value : ȸ�� ���̵�, ��й�ȣ ��ġ ����
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
// Description: ��ġ�ϴ� ȸ�� ���̵� �ҷ�����
// Parameters : string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ��ġ�ϴ� ȸ�� ���̵�
string MemberList::checkID(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			return memberListMain.memberList[i]->getMemberID();
		}
	}
}

// Function : deleteMember(string memberID, MemberList memberListMain)
// Description: ȸ�� �����ϱ�
// Parameters : string memberID - ȸ�� ���̵�
//				MemberList memberListMain - ȸ�� ���
// Return Value : ����
void MemberList::deleteMember(string memberID, MemberList memberListMain)
{
	for (int i = 0; i <= memberListMain.memberNum; i++) {
		if (memberID == memberListMain.memberList[i]->getMemberID()) {
			delete memberListMain.memberList[i];
		}
	}
}
