#include <iostream>
using namespace std;

class Tnode
{
    public:

    int value;
    Tnode *leftson;
    Tnode *rightson;

    public:

    Tnode(int val) //constructor to initiate tree nodes.
    {
        value = val;
        leftson = NULL;
        rightson = NULL;
    }

    friend void traverseLeft(Tnode *Root);
    friend void traverseRight(Tnode *Root,float r);
    friend void traverseLeaf(Tnode *Root);
    friend Tnode* createTree (Tnode * &Root);
};

Tnode* createTree (Tnode * &Tree) // a recursive f(n) to create a tree.
{
    int item;
    cout<<"Enter value: ";
    cin>>item;
    Tree = new Tnode(item);

    if(item == -1) //base condition to stop creating further nodes.
    return NULL;

    cout<<"Enter value to the Left of "<<item<<" \n"; //creating a left sub-tree.
    Tree->leftson = createTree(Tree->leftson);

    cout<<"Enter value to right of "<<item<<" \n";  //creating a right sub-tree.
    Tree->rightson = createTree(Tree->rightson);

    return Tree;
}

void traverseLeft(Tnode *Root) //printing all the leftmost non leaf nodes.
{
    if(Root  == NULL || (Root->leftson == NULL && Root->rightson == NULL))
        return;

    else
    {
        cout<<Root->value<<' ';
        if(Root->leftson != NULL)
            traverseLeft(Root->leftson);
        else
            traverseLeft(Root->rightson);
    }
}

void traverseLeaf(Tnode *Root) //printing leaf nodes.
{
    if(Root == NULL)
        return;

    else if(Root->leftson == NULL && Root->rightson ==NULL)
        {cout<<Root->value<<' ';
        return;}
    
    traverseLeaf(Root->leftson);
    traverseLeaf(Root->rightson);
}

void traverseRight(Tnode *Root, float r) //printing rightmost non leaf nodes in reverse and excluding root value.
{
    if(Root  == NULL || (Root->leftson == NULL && Root->rightson == NULL))
        return;
    
    else
    {
        if(Root->rightson)
            traverseRight(Root->rightson,r);
        else
            traverseRight(Root->leftson,r);
    }

    if(Root->value != r)
    cout<<Root->value<<' ';
}

int main()
{
    Tnode *Root = NULL;
    createTree(Root);

    cout<<"\nBoundary Traversal of the Following Tree: -\n\n";
    traverseLeft(Root);

    traverseLeaf(Root->leftson);
    traverseLeaf(Root->rightson);

    float r = Root->value;
    traverseRight(Root,r);

    return 0;
}