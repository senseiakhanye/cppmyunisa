#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Enter a number : ";
    cin >> n;
    i = n;
    cout << "n++ operator : " << n++ << "  ++n operator : " << ++i << endl;
    return 0;
}