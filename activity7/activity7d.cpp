#include <iostream>

using namespace std;

int main()
{
    float kms, litres, kiloLitre, litreLitre;

    cout << "Number of kilometres : ";
    cin >> kms;
    cout << "Number of litres : ";
    cin >> litres;
    kiloLitre = 15.722;
    litreLitre = 6.36051;
    cout << "kms\tlitres\tkm/l\tl/100km\t" << endl;
    cout << kms << "\t" << litres << "\t" << kiloLitre << "\t" << litreLitre << endl;
    return 0;
}