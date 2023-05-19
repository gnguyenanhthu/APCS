#include <iostream>
using namespace std;

void dosth(int a, int&b);
int main()
{
	int x = 5, y = 7;

	dosth(x, y);
	cout << x << " " << y << endl;

	dosth(y, x);
	cout << x << " " << y << endl;

	system("pause");
	return 0;
}

void dosth(int a, int&b)
{
	int x = 5, y = 7;
	x += a + y;
	b = x + y;
	y += b - a;
	a += y;
	cout << x << " " << y<<" ";
}