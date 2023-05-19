#include <iostream>
using namespace std;

int main()
{
	int x, i, t, max;
	max = 0;
	i = 1;
	cin >> x;
	while (x!=0)
	{
		t = x;
		while (i <= sqrt(t))
		{
			t %= i;
			++i;
		}
		if ((t == 0) && (max < x))
			max = x;
		cin >> x;
	} 
	if ((max == 0) || (max == 1))
		cout << "There is no biggest prime number." << endl;
	else
		cout << max << endl;
	system("pause");
}