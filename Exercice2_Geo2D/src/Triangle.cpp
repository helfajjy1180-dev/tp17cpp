#include "Triangle.h"
#include "Segment.h"

Triangle::Triangle() : A(), B(), C() {}

Triangle::Triangle(const Point& A, const Point& B, const Point& C)
    : A(A), B(B), C(C) {}

double Triangle::perimetre() const {
    Segment AB(A, B);
    Segment BC(B, C);
    Segment CA(C, A);

    return AB.longueur() + BC.longueur() + CA.longueur();
}
