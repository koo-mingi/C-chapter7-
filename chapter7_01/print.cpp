#include "weightmanage.h"


void weight::print() {

	cout << "���� : " << customer_irum << endl;
	cout << "���� : " << ((gender == 1 || gender==3) ? "����":"����") << endl;
	cout << "����� Ű�� �����Դ�  " << customer_height << "cm ," << customer_weight <<"kg"<< endl;
	cout << "����� �����Դ� " << abs(customer_opt) << "Kg " << (customer_opt == 0 ? "����":(customer_opt < 0 ? "�̸�" : "�ʰ�")) << endl;

	
}