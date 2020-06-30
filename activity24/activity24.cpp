#include <iostream>

using namespace std;

int main() {
	const int maxNum = 25;
	float mark, average, total;
	float marks[maxNum];
	int counter;

	counter = 0;
	total = 0;
	cout << "Enter mark (0 to exit) : ";
	cin >> mark;
	while (mark != 0 && counter < maxNum) {
		marks[counter] = mark;
		counter += 1;
		total += mark;
		cout << "Enter another mark (0 to exit) : ";
		cin >> mark;
	}
	average = total / counter;
	cout << "The average mark is " << average << endl;
	cout << "Marks greater than the average below" << endl;
	for (int x = 0; x < counter; x++) {
		if (marks[x] > average) {
			cout << "Mark greater than average : " << marks[x] << endl;
		}
	}
	return 0;
}
