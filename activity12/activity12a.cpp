#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    float hoursBefore, hoursAfter, payment;
    const float BEFORE_RATE = 32.50;
    const float AFTER_RATE = 44;
    const int MIN = 1;
    const int MAX = 12;
    const int MID = 6;

    payment = 0;
    hoursBefore = 0;
    hoursAfter = 0;
    cout << "Wage calculation" << endl;
    cout << "================" << endl;
    cout << "Starting time: ";
    cin >> num1;
    cout << "Finish time: ";
    cin >> num2;
    if (num1 < num2 && num1 >= MIN && num2 <= MAX)
    {
        if (num1 < MID && num2 > MID)
        {
            hoursBefore = MID - num1;
            hoursAfter = num2 - MID;
        }
        else if (num1 < MID && num2 < MID)
            hoursBefore = num2 - num1;
        else if (num1 > MID && num2 > MID)
            hoursAfter = num2 - num1;
        payment = hoursBefore * BEFORE_RATE;
        payment += hoursAfter * AFTER_RATE;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The payment is R " << payment << endl;
}