#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <cg3/geometry/segment2.h>

class Trapezoid
{
private:
    cg3::Segment2d top;
    cg3::Segment2d bottom;
    cg3::Point2d rigth;
    cg3::Point2d left;

public:
    Trapezoid();
    Trapezoid(cg3::Segment2d top, cg3::Segment2d bottom, cg3::Point2d rigth, cg3::Point2d left);
    void setTop(cg3::Segment2d top);
    void setBottom(cg3::Segment2d bottom);
    void setLeft(cg3::Point2d left);
    void setRigth(cg3::Point2d rigth);
    cg3::Segment2d getTop() const;
    cg3::Segment2d getBottom() const;
    cg3::Point2d  getLeft() const;
    cg3::Point2d  getRigth() const;
};

#endif // TRAPEZOID_H
