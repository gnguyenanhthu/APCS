//Giai pt bac 2 ax^2+bx+c=0

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	float a, b, c;
	cout << "Giai pt bac 2 ax^2+bx+c=0." << endl;
	cout << "Moi nhap so a: ";
	cin >> a;
	cout << "Moi nhap so b: ";
	cin >> b;
	cout << "Moi nhap so c: ";
	cin >> c;
	if (a == 0)
	{
		if (b == 0)
			cout << "Pt nay vo nghiem.";
		else
		{
			float x;
			x = -c / b;
			cout << "Nghiem cua pt " << a << "x^2+" << b << "x+" <<c<<"=0 la: x="
				<< fixed << setprecision(2) << x;
		}
	}
	
	else
	{
		float delta;
		delta = b*b - 4 * a*c;
		
		if (delta < 0)
			cout << "Pt nay vo nghiem.";
		else
		{
			float x1, x2;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

		}
	}
}