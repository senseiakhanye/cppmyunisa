#include <iostream>

using namespace std;

float enterStudentMarks(float avarage)
{
    const int NO_MARKS = 4;
    int num, lavarage, total;

    lavarage = 0;
    total = 0;
    for (int i = 0; i < NO_MARKS; i++)
    {
        cout << "Enter mark " << (i + 1) << " : ";
        cin >> num;
        total += num;
    }
    lavarage = total / NO_MARKS;
    if (lavarage > avarage)
        return lavarage;
    return avarage;
}

int main()
{
    float bestAvarage;
    const int STUDENTS = 3;

    bestAvarage = 0;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Enter mark for student " << (i + 1) << endl;
        cout << "==========================" << endl;
        bestAvarage = enterStudentMarks(bestAvarage);
    }
    cout << "The best avarage is : " << bestAvarage << endl;
    return 0;
}