#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Matrix<int> m1(2, 2);

    m1.printMatrix();

    Matrix<int> m2(4, 4);

    m2.printMatrix();


    Matrix<int> m3(4, 4);

    m3.printMatrix();


    Matrix<int> m4 = m2 + m3;

    m4.printMatrix();


    //twoD is defined in src/Matrix.h

    twoD<int> myMatrix = {{2, 2, 2, 2},
                          {3, 3, 3, 3},
                          {4, 4, 4, 4},
                          {5, 5, 5, 5}};


    Matrix<int> m5(4, 4, myMatrix);

    Matrix<int> m6 = m2 + m5;

    m6.printMatrix();

    Matrix<int> m7 = m2 * m3;
    m7.printMatrix();


    twoD<int> myMulMatrix1 = {
            {1,  3, -3},
            {-4, 4, 5},
            {-1, 2, 0},
            {6,  7, 8}
    };

    twoD<int> myMulMatrix2 = {
            {-2, 9, 3,  1},
            {10, 4, 5,  11},
            {-1, 2, 12, 0}
    };

    Matrix<int> mulMat1(4, 3, myMulMatrix1);
    Matrix<int> mulMat2(3, 4, myMulMatrix2);

    Matrix<int> mulMat3 = mulMat1 * mulMat2;

    mulMat3.printMatrix();

    //cout << mulMat3;

    return 0;
}