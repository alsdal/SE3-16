#pragma once

#include <iostream>
using namespace std;

class Member
{
private:
	Member * memberList[50];
	string memberName;
	string memberRegNumber;
	string memberID;
	string memberPassword;
public:
	Member();
	Member(string memberName, string memberRegNumber, string memberID, string memberPassword);
	void createMember(string memberName, string memberRegNumber, string memberID, string memberPassword);
	string getMember();
	void deleteMember();
	void logoutMember();
};