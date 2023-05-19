#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, t, a, b, i;
	cin >> x;
	t = 0;
	a = 0;
	b = 0;
	i = 1;
	while (x != 0)
	{
		t = t % 10;
		x /= 10;
		if (i % 2 == 0)
			a += t;
		else
			b += t;
		i += 1;

	}
	if (a == b)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
}