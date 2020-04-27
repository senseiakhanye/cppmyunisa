#include <iostream>

using namespace std;

int main()
{
    int timeNow, hours;
    do {
        cout << "Enter time and hours : ";
        cin >> timeNow >> hours;
        cout << "Actual : " << (timeNow + hours) % 24 << endl;
    } while (hours != -1);
    return 0;
}