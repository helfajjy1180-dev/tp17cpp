#include "Segment.h"
#include <cmath>

Segment::Segment() : p1(), p2() {}
Segment::Segment(const Point& p1, const Point& p2) : p1(p1), p2(p2) {}

double Segment::longueur() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return std::sqrt(dx * dx + dy * dy);
}
