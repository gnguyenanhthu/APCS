#include <iostream>
using namespace std;

void try2buy(int cur, int n,int *price,int x,int *boughtitems,int *bestitems,int &bestremaining);

int main()
{
	int *price, *boughtitems, *bestitems;
	int n, x, bestremaining;
	
	cout << "How many items in the shop? ";
	cin >> n;
	price = new int[n];
	boughtitems = new int[n];
	bestitems = new int[n];
	cout << "Price of each item: " << endl;
	for (int i = 0; i < n; ++i) {
		cin >> price[i];
		boughtitems[i] = 0; //didn't buy it yet
		bestitems[i] = 0;
	}
	cout << "How much money do you have? ";
	cin >> x;
	bestremaining = x;

	try2buy(0, n, price, x, boughtitems, bestitems, bestremaining);
	printout(n, bestitems,x-bestremaining);

	delete [] price;
	delete [] boughtitems;
	return 0;
}

void try2buy(int cur, int n, int *price, int x_Re, int *boughtitems, int *bestitems, int &bestremaining)
{
	if (x_Re == 0) return;

	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if (x_Re >= price[i]) { //enough money to buy
			++boughtitems[i]; //bought it
			flag = false;
			try2buy(i, n, price, x_Re - price[i], boughtitems, bestitems, bestremaining);
			--boughtitems[i];
		}
	}
	if (flag && (x_Re < bestremaining)) {
		bestremaining = x_Re; //save
		for (int i = 0;i<;i++) //i< ??????????????????
			bestitems[i] = boughtitems[i]; //save it
	}
}

void printout(int n,int *bestitems,int total) {
	cout << "Items to buy: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (bestitems[i] > 0)
			cout << "Item " << i + 1 << ": " << bestitems[i] << endl;
		cout << "Total money spent: " << total << endl;
	}

}