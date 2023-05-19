#include <iostream>
using namespace std;
int main()
{
	int n, c, b;
	bool prime = true;
	c = 2; b = 0;
	cin >> n;
	while (n != 0)
	{
		while ((c < n) && (prime == true))
		{
			if (n%c == 0)
				prime = false;
			c += 1;
		}
		if ((prime == true) && (n > b))
			b = n;
		cin >> n;
		c = 2;
		prime = true;
	}
	if (b == 0)
		cout << "NO" << endl;
	else
		cout << b << endl;
	system("pause");
}