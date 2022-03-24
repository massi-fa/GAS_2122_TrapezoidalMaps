#ifndef NODE_H
#define NODE_H

#include <cg3/geometry/point2.h>
#include <cg3/geometry/segment2.h>

enum NodeT{
    point,
    segment,
    trapezoid,
    empty,
};

class Node
{
private:
    NodeT _type;
    void *_value;
    Node *_rigth;
    Node *_left;
public:
    Node();
    Node(cg3::Segment2d *seg);
    Node(cg3::Point2d *p);
    Node* getLeft();
    Node* getRigth();
    void* getValue();
    void setLeft(Node *left);
    void setRigth(Node *rigth);
    void setValue(void *value);
    NodeT getType();
};

#endif // NODE_H
