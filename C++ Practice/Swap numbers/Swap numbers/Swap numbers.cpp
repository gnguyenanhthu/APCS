//Swap numbers

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b;
	cout << "Swap numbers" << endl;
	cout << "Moi ban nhap so a: ";
	cin >> a;
	cout << "Moi ban nhap so b: ";
	cin >> b;

	if (b > a)
	{
		int n;
		n = b - a;
		a = a + n;
		b = b - n;
		cout << "So a=" << a << endl;
		cout << "So b=" << b << endl;
	}
	else
	{
		int n;
		n = a - b;
		a = a - n;
		b = b + n;
		cout << "So a=" << a << endl;
		cout << "So b=" << b << endl;
	}
	system("pause");
	return 0;
}