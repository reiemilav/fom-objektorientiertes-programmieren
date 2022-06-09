#include "Node.h"

Node::Node()
{
    mValue = 0;
    pPrev = 0;
    pNext = 0;
}

Node::Node(int value)
{
    mValue = value;
    pPrev = 0;
    pNext = 0;   
}

Node::Node(const Node &rhs)
{
    mValue = rhs.mValue;
    pPrev = rhs.pPrev;
    pNext = rhs.pNext;   
}

Node::~Node()
{

}