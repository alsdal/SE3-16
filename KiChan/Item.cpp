#include <stdio.h>
#include <string>
#include "Item.h"

string Item::itemCall()
{
	return this -> itemName;
}

// ���: [�Ǹ���ID] [��ǰ��] [����ȸ���] [����] [���� ����] [��� ���Ÿ�����]
string Item::itemSpecific()
{
	string detail = sellerID + " " + itemName + " " + brandName + " " + to_string(price) + " " + to_string(quantity) + " " + to_string(averageSatisfaction) + "\n";
	
	return detail;
}


// ���� ���Ÿ������� ���Ͽ� ����� ���Ѵ�
// �˾ƾ��� ��: ���Ÿ����� �� Ƚ��
// ����: ((���Ÿ����� �� Ƚ��) * (���� ��ո�����) + ���Ÿ�����)/(���Ÿ����� �� Ƚ�� +1)
int Item::satisfactionEvaluate(int num)
{
	averageSatisfaction = ((numEvaluation * averageSatisfaction) + num) / (numEvaluation + 1);
	numEvaluation += 1;

	return averageSatisfaction;
}
