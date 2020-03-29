#include <iostream>

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    float avg = 0.0;
    // avg = (static_cast<float>(num1) + static_cast<float>(num2)) / 2.0;
    avg = (num1) + num2 / 2.0;
    cout << avg << endl;
    return (0);
}