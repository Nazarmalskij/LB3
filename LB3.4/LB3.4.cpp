// Lab_03_4.cpp
// < Мальський Назар >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;
int main()
{	double x;  // вхідний аргумент
	double y;  // вхідний параметр
	double R;  // вхідний параметр
    double x0; // вхідний параметр
	double y0; // вхідний параметр
    double x1; // вхідний параметр
	double y1; // вхідний параметр
	
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	
	x0 = R;
	y0 = 0;

	x1 = -R;
	y1 = 0;


	// розгалуження в повній формі
	if ((( x > 0 && x < R ) && (y < 0 && y > -R) &&( (x - x0) * (x-x0) + (- y0) * (y - y0) <= R * R )) || 
		(((x < 0 && x > -R) && (y > 0 && y < R )) && ( (x - x1) * (x - x1 ) + (y - y1) * (y - y1)  )))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	system("pause");
	return 0;
}