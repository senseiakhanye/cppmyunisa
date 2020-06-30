#include <iostream>

using namespace std;

const int SQUARE_MATRIX = 4;

void displayMatrix(const int matrix[][SQUARE_MATRIX]) {
    for (int i = 0; i < SQUARE_MATRIX; i++) {
        for (int x = 0; x < SQUARE_MATRIX; x++) {
            cout << matrix[i][x] << "\t";
        }
        cout << endl;
    }
}

void transposeMatrix(int matrix[][SQUARE_MATRIX]) {
    int tempMatrix[SQUARE_MATRIX][SQUARE_MATRIX];

    for (int i = 0; i < SQUARE_MATRIX; i++) {
        for (int x = 0; x < SQUARE_MATRIX; x++) {
            tempMatrix[i][x] = matrix[x][i];
        }
    }
    for (int i = 0; i < SQUARE_MATRIX; i++) {
        for (int x = 0; x < SQUARE_MATRIX; x++) {
            matrix[i][x] = tempMatrix[i][x];
        }
    }
}

int main() {
    int matrix[][SQUARE_MATRIX] = {{1, 2, 1, 2},
                      {3, 4, 3, 4},
                      {5, 6, 5, 6},
                      {7, 8, 7, 8}};

    cout << "Original matrix" << endl;
    displayMatrix(matrix);
    transposeMatrix(matrix);
    cout << endl << "Transposed matrix" << endl;
    displayMatrix(matrix);
    return 0;
}