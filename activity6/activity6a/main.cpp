#include <iostream>

using namespace std;

int main()
{
    float price1, price2, price3, totalExcl, totalincl, vatAmount;
    const float vat = 14;
    cout << "Enter first price : ";
    cin >> price1;
    cout << "Enter second price : ";
    cin >> price2;
    cout << "Enter third price : ";
    cin >> price3;
    totalExcl = price1 + price2 + price3;
    vatAmount = (totalExcl * vat) / 100;
    totalincl = vatAmount + totalExcl;

    cout << "Total : " << totalExcl << endl;
    cout << "Vat : " << vatAmount << endl;
    cout << "Total including VAT " << totalincl << endl;
    return 0;
}