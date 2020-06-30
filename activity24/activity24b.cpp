#include <iostream>

using namespace std;

void add(int numbers[], int tempNumber, int maxNumber) {
	int temp;
	for (int x = 0; x < maxNumber; x++) {
		if (tempNumber < numbers[x]) {
			temp = numbers[x];
			numbers[x] = tempNumber;
			tempNumber = temp;
		}
	}
	numbers[maxNumber] = tempNumber;
}

int main()
{
	const int maxNum = 25;
	int numbers[maxNum];
	int tempNumber;

	srand(time(0));
	cout << "As generated : ";
	for (int x = 0; x < maxNum; x++) {
		tempNumber = rand() % 1000;
		cout << tempNumber << " ";
		add(numbers, tempNumber, x);
	}
	cout << endl;
	cout << "Ordered random numbers " << endl;
	for (int x = 0; x < maxNum; x++) {
		cout << numbers[x] << " ";
	}
	cout << endl;
	return 0;
}
