#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point p1;
    Point p2;

public:
    Segment();
    Segment(const Point& p1, const Point& p2);

    double longueur() const;
};

#endif
