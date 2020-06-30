#include <iostream>

using namespace std;

const int LEVELS = 6;

void enterValues(int levels[][LEVELS], int MAX_CARS, int MAX_LEVELS, int km[]) {
	int tempValue;

	for (int x = 0; x < MAX_CARS; x++) {
		for (int i = 0; i < MAX_LEVELS; i++) {
			cout << "Car " << x + 1 << " noise level at " << km[i] << " km/h : ";
			cin >> tempValue;
			levels[x][i] = tempValue;
		}
		cout << endl;
	}
}

void outValues(int levels[][LEVELS], int MAX_CARS, int MAX_LEVELS, int km[])
{
	float ave[MAX_CARS];
	int tempNumber;

	cout << "\t\t\t";
	for (int x = 0; x < MAX_LEVELS; x++) {
		cout << km[x] << " km/h\t";
	}
	cout << endl;
	for (int i = 0; i < MAX_CARS; i++) {
		cout << "Car " << i + 1 << "\t\t";
		tempNumber = 0;
		for (int x = 0; x < MAX_LEVELS; x++) {
			tempNumber += levels[i][x];
			cout << levels[i][x] << "\t";
		}
		cout << endl;
		ave[i] = (float)tempNumber / MAX_LEVELS;
	}
	for (int i = 0; i < MAX_CARS; i++) {
		cout << "Car " << i + 1 << " average : " << ave[i] << " km/h" << endl;
	}
}

int main() {
	const int MAX_CARS = 5;
	const int MAX_LEVELS = LEVELS;
	int levels[MAX_CARS][MAX_LEVELS];
	int km[] = {20, 40, 60, 80, 100, 120};

	enterValues(levels, MAX_CARS, MAX_LEVELS, km);
	outValues(levels, MAX_CARS, MAX_LEVELS, km);
	return 0;
}
