#include <iostream>

using namespace std;

int main() {
	const float prices[] = {2.65, 4.5, 4.9, 3.75, 4};
	const int maxCode = 4;
	float total;
	int code;

	cout << "Enter the item code, -1 to end: ";
	cin >> code;
	total = 0;
	while (code >= 0 && code < maxCode) {
		cout << prices[code] << endl;
		total += prices[code];
		cin >> code;
	}
	cout << "Total : R " << total << endl;
	return 0;
}
