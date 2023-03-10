#include <iostream>
#include <queue>
#include <vector>
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

    friend void ZigZagTraversal(Tnode *Root);
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

void ZigZagTraversal(Tnode *Root)
{
    queue<Tnode*> q;
    q.push(Root);
    bool direction = true; //check the level and traverse accordingly.

    while(!q.empty())
        {
            int size = q.size();
            vector <float> ans(size);

            for(int i = 0; i<size; i++)
            {
                Tnode *T = q.front();
                q.pop();

                int z = direction?i:size-1-i;

                ans[z]=T->value;
                if(T->leftson) 
                    q.push(T->leftson);
                if(T->rightson)
                    q.push(T->rightson);
            }

            direction = !direction;

            for(int i:ans)
                cout<<i<<" ";

        }
}

int main()
{
    Tnode *Tree = NULL;
    createTree(Tree);

    cout<<"\nZig-Zag Traversal is: -\n\n";
    ZigZagTraversal(Tree);
    
    return 0;
}