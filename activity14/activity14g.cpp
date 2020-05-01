#include <iostream>

using namespace std;

int main()
{
    int value, sum, many;
    float average;

    sum = 0;
    many = 0;
    cout << "Enter a number to add (0 to exit): ";
    cin >> value;
    while (value != 0)
    {
        sum += value;
        many++;
        cout << "The sum so far is " << sum << endl;
        cout << "Enter a number to add (0 to exit): ";
        cin >> value;
    }
    average = float(sum) / many;
    cout << "The average is " << average << endl;
    return 0;
}