#pragma once

using namespace std;

#include "Login.h"

class LoginUI
{
private:
	Login loginMember;
public:
	LoginUI();
	bool login(string memberID, string memberPassword);
};
