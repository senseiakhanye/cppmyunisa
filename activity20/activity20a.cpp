#include <iostream>

using namespace std;

void historyPrint(int num, char c)
{
    for (int i = 0; i < num; i++)
        cout << c;
    cout << endl;
}

int main()
{
    int counter, total, num, avarage;

    total = 0;
    counter = 0;
    cout << "Enter the fist value (negative to end): ";
    cin >> num;
    while (num >= 0)
    {
        total += num;
        counter += 1;
        historyPrint(num, '*');
        cout << "Enter another value (negative to exit): ";
        cin >> num;
    }
    avarage = total / counter;
    cout << "The avarage is: " << avarage << endl;
    historyPrint(avarage, '+');
    return 0;
}