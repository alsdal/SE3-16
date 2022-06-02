#include "Clothes.h"


// Function : string itemSpecific()
// Description: 의류정보 가져오기
// Parameters : 
// Return Value :  의류 정보
string Clothes::itemSpecific()
{
	string detail = sellerID + " " + clothesName + " " + clothesCompanyName + " " + to_string(price) + " " + to_string(amount) + " " + to_string(satisfaction) + "\n";

	return detail;
}

// Function : int satisfactionEvaluate()
// Description: 판매 상품 만족도 가져오기
// Parameters : int num - 입력한 구매 만족도
// Return Value :  판매 상품 만족도
int Clothes::satisfactionEvaluate(int num)
{
	satisfaction = ((numEvaluation * satisfaction) + num) / (numEvaluation + 1);
	numEvaluation += 1;

	return satisfaction;
}

// Function : string getClothesDetail()
// Description: 상품 정보 가져오기
// Parameters : 
// Return Value :  상품 정보
string Clothes::getClothesDetail() {
	string detail;
	detail = this -> clothesName + " " + this -> clothesCompanyName + " " + to_string(this -> price) + " " + to_string(this -> amount);
	return detail;
}

