#pragma once
#include "Node.h"

class DList
{
protected:
    Node *pRoot;
    Node *pCurrent;
    Node *pEnd;


public:
    DList();
    DList(int value);

    ~DList();

    int InsertNode(int);
    int ShowList();
    //void SetCurrent(int);
    //void ShowCurrentNode();
    //void SortList();
    //int SaveList();
    //int LoadList();
    //void SetCurrentLast();
};