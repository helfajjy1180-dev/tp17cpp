#include "Point3D.h"
#include <iostream>

Point3D::Point3D() : x(0), y(0), z(0) {}

Point3D::Point3D(double x, double y, double z)
    : x(x), y(y), z(z) {}

double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }

void Point3D::afficher() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}
