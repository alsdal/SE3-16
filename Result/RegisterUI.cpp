#include "RegisterUI.h"
#include "Register.h"
#include <iostream>
using namespace std;


RegisterUI::RegisterUI()
{

}


// Function : enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword)
// Description: �� ȸ������ ���
// Parameters : string memberName - ȸ�� �̸�
//				string memberRegNumber - ȸ�� �ֹι�ȣ
//				string memberID - ȸ�� ���̵�
//				string memberPassword - ȸ�� ��й�ȣ
// Return Value : ���� ����� ȸ�� ����
Member * RegisterUI::enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return registerMember.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}
