#include "node.h"

Node::Node()
{
    _type = empty;
    _value = nullptr;
    _rigth = nullptr;
    _left = nullptr;
}

Node::Node(cg3::Segment2d *seg)
{
    _type = segment;
    _value = (void*) seg;
    _rigth = nullptr;
    _left = nullptr;
}

Node::Node(cg3::Point2d *p)
{
    _type = point;
    _value = (void*) p;
    _rigth = nullptr;
    _left = nullptr;
}

Node* Node::getLeft()
{
    return _left;
}
Node* Node::getRigth()
{
    return _rigth;
}
void* Node::getValue()
{
    return _value;
}
void Node::setLeft(Node *left)
{
    _left = left;
}
void Node::setRigth(Node *rigth)
{
    _rigth = rigth;
}
void Node::setValue(void* value)
{
    _value = value;
}

NodeT Node::getType(){
    return _type;
}

