#include "RegisterUI.h"
#include "Register.h"

#include <iostream>
using namespace std;


RegisterUI::RegisterUI()
{

}

Member * RegisterUI::enterInfo(string memberName, string memberRegNumber, string memberID, string memberPassword)
{
	return registerMember.addNewMember(memberName, memberRegNumber, memberID, memberPassword);
}
