#include <iostream>

using namespace std;

int main() {
    float tax, total;
    cout << "enter the cost of item : " << endl;
    cin >> total;
    if (total >= 3.0) {
        tax = 0.10;
        cout << total + (total * tax) << endl;
    } else {
        cout << total << endl;
    }
}