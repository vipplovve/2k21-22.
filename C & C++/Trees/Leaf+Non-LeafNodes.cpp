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

    friend Tnode* createTree (Tnode * &Root);
    friend int leafnonleaf(Tnode * Root,char c); 
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

int leafnonleaf(Tnode * Tree,char c)
{
    static int count =0;
    if(c == 'l')
    {
        if(Tree != NULL)
        {
            leafnonleaf(Tree->leftson,'c');

            if(Tree->leftson == NULL && Tree->rightson == NULL)
                cout<<1;
            
            leafnonleaf(Tree->rightson,'c');
        }

        else
            return 0;
    }
    else if(c == 'n')
    {
        if(Tree != NULL)
        {
            leafnonleaf(Tree->leftson,'n');

            if(Tree->leftson != NULL || Tree->rightson != NULL)
                count++;
            
            leafnonleaf(Tree->rightson,'n');
        }

        else
            return 0;
    }
    return count;
}

int main()
{
    Tnode *Root = NULL;
    createTree(Root);

    int leaf = leafnonleaf(Root,'l');
    int nonleaf = leafnonleaf(Root,'n');

    cout<<leaf<<' '<<nonleaf<<' '<<endl;
    return 0;
}