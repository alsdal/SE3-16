#pragma once
#include <iostream>
#include "Register.h"
using namespace std;


// Class : RegisterUI
// Description : ȸ������ UI Ŭ����
class RegisterUI
{
private:
	Register registerMember;
public:
	RegisterUI();
	Member* enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword);
};
