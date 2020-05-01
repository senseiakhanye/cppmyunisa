#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    for (int i = 10; i <= 20; i++)
    {
        cout << i << " ";
        count += 1;    
    }
    cout << endl;
    cout << "Count : " << count << endl;
    return 0;
}