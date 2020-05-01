#include <iostream>

using namespace std;

int main()
{
    int dim1, dim2, dim3;
    const float SMALL_DIMENSION = 2.50;
    const float MEDIUM_DIMENSION = 5;
    const float LARGE_DIMENSION = 6.25;
    const int MIN_LENGTH = 235;
    const int MID_LENGTH = 250;
    const int MAX_LENGTH = 353;
    const int MIN_HEIGHT = 120;
    const int MID_HEIGHT = 176;
    const int MAX_HEIGHT = 250;
    const int MIN_WEIGHT = 5;
    const int MID_WEIGHT = 10;
    const int MAX_WEIGHT = 30;

    cout << "Enter the three dimensions : ";
    cin >> dim1 >> dim2 >> dim3;
    if (dim1 >= 0 && dim1 < MID_LENGTH)
    {
        if (dim2 >= 0 && dim2 <= MID_HEIGHT && dim3 >= 0 && dim3 < MID_WEIGHT)
            cout << "Rate : " << SMALL_DIMENSION << endl;
        else
            cout << "The letter must be regarded as a parcel" << endl;
    }
    else
        if (dim1 >= MID_LENGTH && dim1 <= MAX_LENGTH)
        {
            if (dim2 >= MID_HEIGHT && dim2 <= MAX_HEIGHT && dim3 >= MID_WEIGHT && dim3 < MAX_WEIGHT)
                cout << "Rate : " <<  MEDIUM_DIMENSION << endl;
            else
                cout << "The letter must be regarded as parcel" << endl;
        }
        else
            if (dim1 < MAX_LENGTH)
            {
                if (dim2 >= MID_HEIGHT && dim2 <= MAX_HEIGHT && dim3 >= MID_WEIGHT && dim3 < MAX_WEIGHT)
                    cout << "Rate : " << LARGE_DIMENSION << endl;
                else
                    cout << "The letter must be regarded as a parcel" << endl;
            }
            else
            {
                cout << "The letter must be regarded as a parcel" << endl;
            }
            
}