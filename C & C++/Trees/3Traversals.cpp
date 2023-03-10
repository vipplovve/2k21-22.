#include <iostream>
using namespace std;

class Tnode
{

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

    friend Tnode* createTree (Tnode * &Root);

    friend void preOrder( Tnode *Root);
    friend void postOrder( Tnode *Root);
    friend void inOrder( Tnode *Root);
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

//use sequence 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1 to generate a B.T of the form: -
//1
//2 5
//3 4 6 7

void preOrder(Tnode *Tree) //Root - Left - Right.
{
    
    if(Tree != NULL)
    {
        cout<<Tree->value<<' ';
        preOrder(Tree->leftson);
        preOrder(Tree->rightson);
    }

    else
        return;
}

void inOrder(Tnode *Tree) //Left - Root - Right.
{
    
    if(Tree != NULL)
    {
        inOrder(Tree->leftson);
        cout<<Tree->value<<' ';
        inOrder(Tree->rightson);
    }

    else
        return;
}

void postOrder(Tnode *Tree) //Left - Right - Root.
{
    
    if(Tree != NULL)
    {
        postOrder(Tree->leftson);
        postOrder(Tree->rightson);
        cout<<Tree->value<<' ';
    }

    else
        return;
}

int main()
{
    Tnode *Root =NULL;

    createTree(Root);

    cout<<"\n\nPrinting the preOrder Traversal Sequence: -\n\n";
    preOrder(Root);

    cout<<"\n\nPrinting the inOrder Traversal Sequence: -\n\n";
    inOrder(Root);

    cout<<"\n\nPrinting the postOrder Traversal Sequence: -\n\n";
    postOrder(Root);
    cout<<endl<<endl;

    return 0;
}