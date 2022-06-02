#pragma once
#include <iostream>
#include "Register.h"
using namespace std;


// Class : RegisterUI
// Description : 회원가입 UI 클래스
class RegisterUI
{
private:
	Register registerMember;
public:
	RegisterUI();
	Member* enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword);
};
