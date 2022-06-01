#pragma once

#include <iostream>
using namespace std;

#include "Register.h"

class RegisterUI
{
private:
	Register registerMember;
public:
	RegisterUI();
	Member* enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword);
};
