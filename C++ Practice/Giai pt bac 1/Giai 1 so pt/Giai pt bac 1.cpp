//Giai pt bac 1

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float a, b;

	cout << "Giai pt bac 1 ax+b=0" << endl;
	cout << "Moi nhap so a: ";
	cin >> a;
	cout << "Moi nhap so b: ";
	cin >> b;

	if (a == 0)
		cout << "Pt nay vo nghiem.";
	else
	{
		float x;
		x = -b / a;
		cout << "Nghiem cua pt " << a << "x+" << b << "=0 la: " << "x="
			<< fixed << setprecision(2) << x;
	}
	cin.get();
	cin.get();
	return 0;
}