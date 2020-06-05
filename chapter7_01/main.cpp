#include "weightmanage.h"

int main()
{
	weight w1;
	char name[20];
	int gender, height, weight;
	cout << "이름을 입력세요 : ";
	cin >> name;
	cout << "성별을 입력하세요(남자 1 또는 3, 여자 2 또는 4) : ";
	cin >> gender;
	cout << "키와 몸무게를 입력하세요 :";
	cin >> height >> weight;
	cout << endl;
	w1.calc_info(name, gender);
	w1.calc_stweight(height, weight);
	w1.print();
	return 0;
}