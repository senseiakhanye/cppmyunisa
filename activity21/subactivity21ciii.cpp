#include <iostream>

using namespace std;

void calcRemainder(int time, int ratio, int & value, int & remainder)
{
    value = time / ratio;
    remainder = time % ratio;
}

int main()
{
    int seconds;
    int val, rem;

    cout << "Input a number of seconds : ";
    cin >> seconds;
    calcRemainder(seconds, 60, val, rem);
    cout << "Value : " << val << " reminder : " << rem << endl;
    return 0;
}