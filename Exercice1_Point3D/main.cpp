#include "Point3D.h"
#include <iostream>
int main() {
    Point3D p1;
    Point3D p2(2.5, 3.0, 4.5);

    std::cout << "Point 1 : ";
    p1.afficher();

    std::cout << "Point 2 : ";
    p2.afficher();

    return 0;

}
