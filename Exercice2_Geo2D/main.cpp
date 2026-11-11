#include <iostream>
#include "Point.h"
#include "Triangle.h"

int main() {
    Point A(0, 0);
    Point B(4, 0);
    Point C(0, 3);

    Triangle t(A, B, C);

    std::cout << "Perimetre du triangle = " << t.perimetre() << std::endl;
    return 0;
}
