#include "weightmanage.h"



void weight::calc_info(char *irum, int gender)
{
	// 배열에 값을 담을려면 strcpy_s를 사용. "="는 못 씀.
	// strcpy_s(배열,포인터);
	strcpy_s(customer_irum, irum);
	strcpy_s(customer_irum, irum);
	this->gender = gender;
}

void weight::calc_stweight(int h, int w)
{
	customer_height = h;
	customer_weight = w;
	double stdweight = 0; //적정 몸무게

	//남자(1 또는 3) (키 - 100)*0.9
	//여자(2 또는 4) (키 - 110)*0.9
	if (gender == 1 || gender == 3) {
		stdweight = (customer_height - 100) *0.9;
	}
	else if(gender == 2 || gender == 4){
		stdweight = (customer_height - 110)*0.9;
	}

	customer_opt = customer_weight - stdweight;
}




