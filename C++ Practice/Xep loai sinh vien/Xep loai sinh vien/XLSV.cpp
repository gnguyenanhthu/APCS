#include <iostream>
using namespace std;
#include <iomanip>
double round(double);

int main()
{
	double a;
	int n;
	cout << "Moi nhap diem trung binh: ";
	cin >> a;
	n = round(a);
	switch (n)
	{
	case 1:
	{
		cout << "Sinh vien nay xep loai kem";
		break;
	}
	case 2:
	{
		cout << "Sinh vien nay xep loai kem";
		break;
	}
	case 3:
	{
		cout << "Sinh vien nay xep loai kem";
		break;
	}
	case 4:
	{
		cout << "Sinh vien nay xep loai yeu";
		break;
	}
	case 5:
	{
		cout << "Sinh vien nay xep loai trung binh";
		break;
	}
	}
	system("pause");
	return 0;