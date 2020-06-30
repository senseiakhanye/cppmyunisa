#include <iostream>
#include <string>

using namespace std;

void stockValue(string stockNames[], float prices[], int stock[], int maxnum) {
	float tempValue;

	tempValue = 0;
	cout << "List of items" << endl;
	cout << "Name\t\t\tPrice\t\tstock" << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	for (int x = 0; x < maxnum; x++) {
		cout << stockNames[x] << "\t\t" << prices[x] << "\t\t" << stock[x] << endl;
		tempValue += (prices[x] * stock[x]);
	}
	cout << endl;
	cout << "Stock value : " << tempValue << endl;
}

void addItems(string stockNames[], float prices[], int stock[], int maxnum) {
	int stockCode;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "List of items" << endl;
	cout << "Name\t\t\tPrice" << endl;
	for (int x = 0; x < maxnum; x++) {
		cout << stockNames[x] << "\t\t" << prices[x] << endl;
		cout << "Enter stock value : ";
		cin >> stockCode;
		stock[x] = stockCode;
	}
	cout << endl;
}

int main()
{
	const int MAX_STOCK = 7;
	string names[] = {"Plain candles", "Scented candles", "Dream-catchers", "Beads place mats", "Bead coasters", "Incence holders", "Hand place Ms"};
	float prices[] = {8.00, 10.00, 19.00, 11.50, 5.00, 6.40, 23.50};
	int stock[MAX_STOCK];

	addItems(names, prices, stock, MAX_STOCK);
	stockValue(names, prices, stock, MAX_STOCK);
	return 0;
}
