#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10],row=0,col=0;
    cout << "please enter length of row of array\n ";
    cin>>row;
    cout<<"please enter length of column of array \n";
    cin>>col;
    cout<<"please enter elesements of A \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"please enter elesements of B \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row; j++)

        cin>>b[i][j];

        cout<<"\n";
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        c[i][j]=a[i][j]+b[i][j];
    }


       for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        cout<<c[i][j]<<"\t";

        cout<<"\n";
    }
    return 0;
}
