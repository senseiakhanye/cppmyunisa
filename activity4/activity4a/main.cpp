#include <iostream>

using namespace std;

int main() {
    int minute1, minute2, seconds1, seconds2, addMinutes;
    cout << "Please enter the first track length in minutes of the track mm ss : " ;
    cin >> minute1 >> seconds1;
    cout << "Please enter the second track length in minutes of the track mm ss : " ;
    cin >> minute2 >> seconds2;
    addMinutes = (seconds1 + seconds2) > 60 ? 1 : 0;
    cout << "The total sum of the two minutes is : " << (minute1 + minute2 + addMinutes);
    cout << " and " << ((seconds1 + seconds2) % 60) << " seconds" << endl;
}