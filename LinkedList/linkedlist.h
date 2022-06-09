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

    int setValue(int);
    int setPrev(Node*);
    int setNext(Node*);
    int getValue();
    Node* getNext();
    Node* getPrev();

    
};


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


int Node::setValue(int value)
{
    mValue = value;
}

int Node::setPrev(Node *Prev)
{
    pPrev = Prev;
}

int Node::setNext(Node *Next)
{
    pNext = Next;
}

int Node::getValue()
{
    return mValue;
}

Node* Node::getPrev()
{
    return pPrev;
}

Node* Node::getNext()
{
    return pNext;
}







class DList
{
protected:
    Node *pRoot;
    Node *pCurrent;
    Node *pEnd;

public:
    DList();
    DList(int);

    ~DList();

    int InsertNode(int);
    int ShowList();
    // int SetCurrent();
    // int ShowCurrentNode();
    // int SortList();
    // int SaveList();
    // int LoadList();
    // int SetCurre
};


DList::DList()
{
    pRoot = 0;
    pCurrent = 0;
    pEnd = 0;
}

DList::DList(int value)
{
    pRoot = 0;
    pCurrent = 0;
    pEnd = 0;
    InsertNode(value);
}

DList::~DList()
{
}

int DList::InsertNode(int value){
    Node *pNewNode;
    Node *pTemp;

    pNewNode = new Node();

    if (pNewNode){
        pNewNode->setValue(value);
        if (pRoot == 0){
            pNewNode->setPrev(0);
            pNewNode->setNext(0);
            pRoot = pNewNode;
            pEnd = pNewNode;
        } else if (pCurrent->getNext() == 0){
            pNewNode->setNext(0);
            pNewNode->setPrev(pCurrent);
            pCurrent->setNext(pNewNode);
            pEnd = pNewNode;
        } else {
            pTemp = pCurrent->getNext();
            pCurrent->setNext(pNewNode);
            pNewNode->setPrev(pCurrent);
            pNewNode->setNext(pTemp);
            pTemp->setPrev(pNewNode);
        }

        pCurrent = pNewNode;
        return 0;
    } else {
        return 1;
    }
}


