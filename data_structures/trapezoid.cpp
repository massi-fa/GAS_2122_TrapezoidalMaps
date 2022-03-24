#include "trapezoid.h"

Trapezoid::Trapezoid(){};

Trapezoid::Trapezoid(cg3::Segment2d top, cg3::Segment2d bottom, cg3::Point2d rigth, cg3::Point2d left){
    this->top = top;
    this->bottom = bottom;
    this->rigth = rigth;
    this->left = left;
};

void Trapezoid::setTop(cg3::Segment2d top){
    this->top = top;
}
void Trapezoid::setBottom(cg3::Segment2d bottom){
    this->bottom = bottom;
}
void Trapezoid::setLeft(cg3::Point2d left){
    this->left = left;
}
void Trapezoid::setRigth(cg3::Point2d rigth){
    this->rigth = rigth;
}
cg3::Segment2d Trapezoid::getTop() const{
    return this->top;
}
cg3::Segment2d Trapezoid::getBottom() const{
    return this->bottom;
}
cg3::Point2d  Trapezoid::getLeft() const{
    return this->left;
}
cg3::Point2d  Trapezoid::getRigth() const{
    return this->rigth;
}
