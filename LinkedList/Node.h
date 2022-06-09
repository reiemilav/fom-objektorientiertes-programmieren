#pragma once

class Node
{
protected:
    int mValue;
    Node *pPrev;
    Node *pNext;

public:
    Node();
    Node(int value);
    Node(const Node &rhs);

    ~Node();

    void SetValue(int value)
    {
        mValue = value;
    }

    void SetPrev(Node *Prev)
    {
        pPrev = Prev;
    }

    void SetNext(Node *Next)
    {
        pNext = Next;
    }

    int GetValue()
    {
        return mValue;
    }

    Node* GetPrev()
    {
        return pPrev;
    }

    Node* GetNext()
    {
        return pNext;
    }
};