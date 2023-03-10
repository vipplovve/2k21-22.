#include <bits/stdc++.h>
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

    //making friend functions to access private class members: -

    friend Tnode* createTree (Tnode * Root);
    friend int leafCount(Tnode * Root); 
    friend int nonleafCount(Tnode * Root, int&); 
};

Tnode* createTree (Tnode * Tree) // a recursive f(n) to create a tree.
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

int leafCount(Tnode *Root) //a function to count no. of leaf nodes.
{
    if(Root == NULL) //finding a null pointer i.e. no node.
    return 0;

    else
    {
        if(!(Root->leftson) && !(Root->rightson)) //a leaf node.
            return 1;
        
        return leafCount(Root->leftson) + leafCount(Root->rightson); //recursive call to traverse left and right sub-trees.
    }
}

int nonleafCount(Tnode *Root,int &count) //counting non-leaf nodes.
{
    if(Root == NULL) // no node.
    return 0;

    else //inOrder Traversal method is implemented.
    {
        nonleafCount(Root->leftson,count);
        if(!(Root->leftson == NULL && Root->rightson == NULL))
            count++;
        nonleafCount(Root->rightson,count);
    }
}

int main()
{
    Tnode *Root = NULL;

    Root = createTree(Root);
    int leaf = leafCount(Root);
    int count = 0;
    nonleafCount(Root,count);

    cout<<"\nTotal Leaf Nodes: "<<leaf<<endl;
    cout<<"\nTotal Non-Leaf Nodes: "<<count<<endl<<endl;

    return 0;
}
