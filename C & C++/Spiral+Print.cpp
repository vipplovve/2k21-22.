#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter order of the Matrix: ";
    cin>>r>>c;
    int arr[r][c];

    for(int x=0;x<r;x++) //creating a user-input generated 2D array.
    {
        for(int y=0;y<c;y++)
        cin>>arr[x][y];
    }

    int row=0,col=0,Rend=r-1,Cend=c-1;

    while(col<=Cend && row<=Rend)
    {
        for(int x=col;x<=Cend;x++) //printing 1st row.
        cout<<arr[row][x]<<" ";

        row++;

        for(int y=row; y<=Rend;y++) // printing last column.
        cout<<arr[y][Cend]<<" ";

        Cend--;

        for(int z=Cend;z>=col;z--) //printing last row in reverse.
        cout<<arr[Rend][z]<<" ";

        Rend--;

        for(int w=Rend;w>=row;w--)//printing 1st column in reverse.
        cout<<arr[w][col]<<" ";

        col++;

    }

    return 0;
}