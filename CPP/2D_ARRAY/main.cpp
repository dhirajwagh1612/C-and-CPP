#include <iostream>

using namespace std;

int main()
{
    int a[10],b[10],c[10],ip=0;
    cout<<"please enter size of array";
    cin>>ip;
    for(int i=0; i<ip; i++)
    {
        cout<<"please enter "<<i+1<<" element of an array A \n";
        cin>>a[i];
    }
    for(int i =0; i<ip; i++)
    {
        cout<<"please enter "<<i+1<<" element of an array B\n";
        cin>>b[i];
    }
    for(int i=0; i<ip; i++)
    {
        c[i]=a[i]+b[i];
        cout<<c[i]<<"\t";
    }
    return 0;
}
