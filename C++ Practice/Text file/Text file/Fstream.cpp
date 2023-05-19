#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;

bool isprime(int k);

int main()
{
	ifstream fin;
	ofstream fout;

	fin.open("Input.txt");
	fout.open("PrimeNumbers.txt");
	int n;
	fin >> n;
	cout << "N = " << endl;

	int a;
	for (int i = 1; i <= n; ++i)
	{
		fin >> a;
		if (isprime(a))
			fout << a << " ";
	}
	fin.close();
	fout.close();

	return 0;
}

bool isprime(int k)
{
	if (k < 2)
		return false;
	for (int i = 2; i <= sqrt(k); ++i)
	{
		if (k%i)
			return false;
		return true;
	}
}