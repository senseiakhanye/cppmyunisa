#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Enter two numbers to operate on: ";
    cin >> num1 >> num2;
    cout << "<A> Addition | <S> Subtraction | <M> Multiply | <D> Divide :";
    cin >> operation;
    switch (toupper(operation))
    {
        case 'A':
            cout << "Sum: " << (num1 + num2) << endl;
            break;
        case 'S':
            cout << "Value: " << (num1 - num2) << endl;
            break;
        case 'M':
            cout << "Product: " << (num1 * num2) << endl;
            break;
        case 'D':
            if (num2 == 0)
                cout << "Division by 0 not allowed";
            else
                cout << "Factor: " << num1 / num2 << endl;
            break;
        default:
            cout << "Operation not recorgnised" << endl;
            break;
    }
    return 0;
}