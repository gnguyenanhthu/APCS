//Tinh tien dien

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a[] = { 50, 50, 100,100, 100, 0 };
	int b[] = { 1484,1533,1786,2242,2503,2587};
	int i;
	i = 0;
	int s, x;
	cin >> x;
	s = 0;
	while (x > 0)
	{
		if (x <= a[i])
		{
			s = s + x*b[i] * 1.1;
			cout << s << endl;
			system("pause");
			break;
		}
		else
		{
			s = s + a[i] * b[i] * 1.1;
			x = x - a[i];				//tru cai da nhan
			i = i + 1;					//tang len khoang moi
		}
	}
}