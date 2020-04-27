#include <iostream>

using namespace std;

int main()
{
    int mark1, mark2, mark3;
    float avarage;
    cout << "Enter three marks : ";
    cin >> mark1 >> mark2 >> mark3;
    avarage = float(mark1 + mark2 + mark3) / 3;
    cout.precision(4);
    cout << "your avarage is : " << avarage << endl;
    return 0;
}