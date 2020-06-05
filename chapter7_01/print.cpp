#include "weightmanage.h"


void weight::print() {

	cout << "성명 : " << customer_irum << endl;
	cout << "성별 : " << ((gender == 1 || gender==3) ? "남자":"여자") << endl;
	cout << "당신의 키와 몸무게는  " << customer_height << "cm ," << customer_weight <<"kg"<< endl;
	cout << "당신의 몸무게는 " << abs(customer_opt) << "Kg " << (customer_opt == 0 ? "정상":(customer_opt < 0 ? "미만" : "초과")) << endl;

	
}