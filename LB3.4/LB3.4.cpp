// Lab_03_4.cpp
// < ��������� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17
#include <iostream>
using namespace std;
int main()
{	double x;  // ������� ��������
	double y;  // ������� ��������
	double R;  // ������� ��������
    double x0; // ������� ��������
	double y0; // ������� ��������
    double x1; // ������� ��������
	double y1; // ������� ��������
	
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	
	x0 = R;
	y0 = 0;

	x1 = -R;
	y1 = 0;


	// ������������ � ����� ����
	if ((( x > 0 && x < R ) && (y < 0 && y > -R) &&( (x - x0) * (x-x0) + (- y0) * (y - y0) <= R * R )) || 
		(((x < 0 && x > -R) && (y > 0 && y < R )) && ( (x - x1) * (x - x1 ) + (y - y1) * (y - y1)  )))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	system("pause");
	return 0;
}