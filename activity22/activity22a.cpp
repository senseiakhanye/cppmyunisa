#include <iostream>
#include <string>

using namespace std;

void getNameOfStock(int index, string & stockName, float & stockPrice)
{
    switch (index)
    {
        case 0:
            stockName = "Plain candles";
            stockPrice = 8;
            break;
        case 1:
            stockName = "Scented candles";
            stockPrice = 10;
            break;
        default:
            stockName = "Hand-painted Ms";
            stockPrice = 23.50;
            break;
    }
}

int main()
{
    const int MAX_STOCK = 3;
    int stockCount;
    float stockPrice, totalExpenditure;
    string stockName;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Enter the stock price of each item" << endl;
    totalExpenditure = 0;
    for (int i = 0; i < MAX_STOCK; i++)
    {
        getNameOfStock(i, stockName, stockPrice);
        cout << stockName << ": R " << stockPrice << endl;
        cout << "Stock: ";
        cin >> stockCount;
        totalExpenditure += (stockPrice * stockCount);
    }
    cout << "Total value of the stock is R " << totalExpenditure << endl;
    return 0;
}