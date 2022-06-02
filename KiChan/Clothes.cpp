#include "Clothes.h"

string Clothes::itemSpecific()
{
	string detail = sellerID + " " + clothesName + " " + clothesCompanyName + " " + to_string(price) + " " + to_string(amount) + " " + to_string(satisfaction) + "\n";

	return detail;
}

float Clothes::satisfactionEvaluate(int num)
{
	satisfaction = ((numEvaluation * satisfaction) + num) / (numEvaluation + 1);
	numEvaluation += 1;

	return satisfaction;
}

string Clothes::getClothesDetail() {
	string detail;
	detail = this->clothesName + " " + this->clothesCompanyName + " " + to_string(this->price) + " " + to_string(this->amount);
	return detail;
}

