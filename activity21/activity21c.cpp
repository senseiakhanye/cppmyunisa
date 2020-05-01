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
    int min, hour, day, week, remSec, remMin, remHour, remDay;

    cout << "Input a number of seconds : ";
    cin >> seconds;
    calcRemainder(seconds, 60, min, remSec);
    calcRemainder(min, 60, hour, remMin);
    calcRemainder(hour, 24, day, remHour);
    calcRemainder(day, 7, week, remDay);

    cout << seconds << " seconds represents" << endl;
    cout << week << " weeks, " << remDay << " days, ";
    cout << remHour << " hours, " << remMin << " minutes";
    cout << " and " << remSec << " seconds" << endl;
    return 0;
}