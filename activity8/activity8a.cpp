#include <iostream>

using namespace std;

int main()
{
    float salary, taxRate;

    cout << "Salary : ";
    cin >> salary;
    if (salary >= 70000)
    {
        taxRate = 40;
    }
    else
    {
        taxRate = 30;
    }
    cout << "Your tax rate is : " << taxRate << "%" << endl;
    return 0;
}