#include <iostream>

using namespace std;

int main() {
	const int maxNum = 25;
	int num[maxNum] = {10};

	for (int i = 0; i < maxNum; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}
