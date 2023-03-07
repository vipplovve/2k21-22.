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

    friend void LOTraversal( Tnode * Root);
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

void LOTraversal (Tnode * Root) //traversing a B.T. via Level Order Traversal Technique.
{
    cout<<"\nPrinting the So-Formed Binary Tree: -\n\n";
    queue<Tnode*> q;
    q.push(Root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Tnode *temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<'\n';
            if(!q.empty())
                q.push(NULL);
        }
        
        else
        {
            cout<<temp->value<<' ';
        
            if(temp->leftson)
                q.push(temp->leftson);

            if(temp->rightson)
                q.push(temp->rightson);

        }
     
    }
    cout<<endl;
}
int main()
{
    Tnode *Root = NULL;

    createTree(Root);

    LOTraversal(Root);

    return 0;
}
