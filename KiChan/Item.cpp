#include <stdio.h>
#include <string>
#include "Item.h"

string Item::itemCall()
{
	return this -> itemName;
}

// 출력: [판매자ID] [상품명] [제작회사명] [가격] [남은 수량] [평균 구매만족도]
string Item::itemSpecific()
{
	string detail = sellerID + " " + itemName + " " + brandName + " " + to_string(price) + " " + to_string(quantity) + " " + to_string(averageSatisfaction) + "\n";
	
	return detail;
}


// 기존 구매만족도에 더하여 평균을 구한다
// 알아야할 것: 구매만족도 평가 횟수
// 공식: ((구매만족도 평가 횟수) * (현재 평균만족도) + 구매만족도)/(구매만족도 평가 횟수 +1)
int Item::satisfactionEvaluate(int num)
{
	averageSatisfaction = ((numEvaluation * averageSatisfaction) + num) / (numEvaluation + 1);
	numEvaluation += 1;

	return averageSatisfaction;
}
