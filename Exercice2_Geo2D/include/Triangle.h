#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point A;
    Point B;
    Point C;

public:
    Triangle();
    Triangle(const Point& A, const Point& B, const Point& C);

    double perimetre() const;
};

#endif
