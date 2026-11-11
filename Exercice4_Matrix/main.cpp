#include <iostream>
#include "Matrix.h"

int main() {
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1; A.at(0, 1) = 2;
    A.at(1, 0) = 3; A.at(1, 1) = 4;

    B.at(0, 0) = 5; B.at(0, 1) = 6;
    B.at(1, 0) = 7; B.at(1, 1) = 8;

    std::cout << "Matrice A :\n" << A;
    std::cout << "Matrice B :\n" << B;
    std::cout << "A + B :\n" << A + B;
    std::cout << "A * B :\n" << A * B;

    Matrix<double, 3, 3> C;
    C.at(0, 0) = 1.1;
    C.at(1, 1) = 2.2;
    C.at(2, 2) = 3.3;

    std::cout << "Matrice double C :\n" << C;
    return 0;
}
