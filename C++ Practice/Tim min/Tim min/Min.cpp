//Chuong trinh tim min cua 3 so a,b,c

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b, c, n, kq;

	cout << "Tim min cua 3 so." << endl;
	cout << "Moi nhap so a: ";
	cin >> a;
	cout << "Moi nhap so b: ";
	cin >> b;
	cout << "Moi nhap so c: ";
	cin >> c;

	if (a < b)
		n = a;
	else
		n = b;
	if (n < c)
		kq = n;
	else
		kq = c;

	cout << "Min cua 2 so la: " << kq;

	cin.get();
	cin.get();
	return 0;
}