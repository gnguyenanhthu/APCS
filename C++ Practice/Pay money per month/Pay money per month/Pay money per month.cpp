//How much money you have to pay back per month?

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float n, kq;
	int m;
	cout << "How much money you have to pay back per month?" << endl;
	cout << "How much $ you want to borrow? ";
	cin >> n;
	cout << "How long? ";
	cin >> m;
	kq = (n + n*(m / 12)*0.1) / m;
	cout << "The amount of money you have to pay per month: " << kq << endl;
	system("pause");
	return 0;
}
