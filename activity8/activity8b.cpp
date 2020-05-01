#include <iostream>

using namespace std;

int main()
{
    float price, discountedPrice, discount;

    discount = .10;
    cout << "Enter old price : ";
    cin >> price;
    if (price >= 200)
    {
        cout << "Enter special discount : ";
        cin >> discount;
        discount = discount / 100;
    }
    discountedPrice = price - (price * discount);
    cout << "====================" << endl;
    cout << "Was : R " << price << endl;
    cout << "Discount: " << (discount * 100) << "%" << endl;
    cout << "Now : R" << discountedPrice << endl;
    cout << "====================" << endl;
    return 0;
}