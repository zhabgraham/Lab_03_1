// Lab_03_1.cpp
// ������ ��������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 23

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = x * x + sin((4*x)/3);

	// ����� 1: ������������ � ��������� ����
	if (x < -5)
		B = cos(x)/sin(x);
	if (-5 <= x && x <= 0)
		B = 4 - (x * x)/2;
	if (x > 0)
		B = log10(x * x) - (4 * x) / 3;

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// ����� 1: ������������ � ��������� ����
	if (x < -5)
		B = cos(x) / sin(x);
	else
		if (x > 0)
			B = log10(x * x) - (4 * x) / 3;
		else
			B = B = 4 - (x * x) / 2;

	y = A + B;

	cout << "2) y = " << y << endl;

	system("pause");
	return 0;
}
