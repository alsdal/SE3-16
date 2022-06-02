#pragma once

#include <iostream>
using namespace std;

class Member
{
private:
	string memberName;
	string memberRegNumber;
	string memberID;
	string memberPassword;
public:
	Member();
	Member(string memberName, string memberRegNumber, string memberID, string memberPassword);
	string getMemberID();
	string getMemberPW();
};