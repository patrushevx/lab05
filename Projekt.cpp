#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d, e;
	cout << "Podaj dlugosci " << endl;
	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	cout << "Podaj c" << endl;
	cin >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) // jeżeli bok będzie mniejszy od sumy pozostałych boków, utworzenie trójkąta jest możliwe
	{
	cout << "Z podanych boków można utworzyć trójkąt" << endl;
	d = a + b + c; // Robi sumę trójkąta
	e = sqrt((d / 2) * ((d / 2) - a) * ((d / 2) - b) * ((d / 2) - c)); // Robi pierwiastek kwadratowy
	cout << "Obwod wynosi: " << d << endl;
	cout << "Pole wynosi: " << e << endl;
	}
	else {
		cout << "Z podanych boków nie można utworzyć trójkąta" << endl; // jeżeli bok będzie większy od sumy pozostałych boków, utworzenie trójkąta jest nie możliwe
	}
	return 0;
}
