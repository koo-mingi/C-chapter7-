#include "weightmanage.h"

int main()
{
	weight w1;
	char name[20];
	int gender, height, weight;
	cout << "�̸��� �Է¼��� : ";
	cin >> name;
	cout << "������ �Է��ϼ���(���� 1 �Ǵ� 3, ���� 2 �Ǵ� 4) : ";
	cin >> gender;
	cout << "Ű�� �����Ը� �Է��ϼ��� :";
	cin >> height >> weight;
	cout << endl;
	w1.calc_info(name, gender);
	w1.calc_stweight(height, weight);
	w1.print();
	return 0;
}