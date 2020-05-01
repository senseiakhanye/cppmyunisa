#include <iostream>

using namespace std;

void calcMinutes(int seconds, int & minutes, int & remSeconds)
{
    minutes = seconds / 60;
    remSeconds = seconds % 60;
}

void printMinutesAndSeconds(int seconds)
{
    int minutes, remainingSeconds;
    calcMinutes(seconds, minutes, remainingSeconds);
    cout << "minutes " << minutes << ", seconds" << remainingSeconds << endl;
}

int main()
{
    int seconds;

    cout << "Input a number of seconds : ";
    cin >> seconds;
    printMinutesAndSeconds(seconds);
    return 0;
}