#include <iostream>

using namespace std;

int main()
{
    const int cube = 3;
    int x, y, cubevalue, counter;

    cout << "Enter a number: ";
    cin >> x;
    while (x != 0)
    {
        counter = 0;
        cubevalue = 1;
        while (counter < cube)
        {
            cubevalue *= x;
            counter += 1;
        }
        y = cubevalue - (3 * x) + 1;
        cout << "y = " << y << endl;
        cout << "Enter a number : ";
        cin >> x;
    }
    return 0;
}