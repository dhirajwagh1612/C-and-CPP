#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class dhi
{
 public:
    int a=10,b=20;
    public:
    void cal(int c,int d)
    {
        int n=0;
        cout<<"please select the oprator 1:+ \n 2:- \n 3:* \n 4:%"<<endl;
        cin>>n;
        switch(n)
            {
        case 1:
        cout<<"class program begind here \n";
        cout<<c+d;
        break;
        case 2:
        cout<<"class program begind here \n";
        cout<<c-d;
        break;
        case 3:
        cout<<"class program begind here \n";
        cout<<c*d;
        break;
        case 4:
        cout<<"class program begind here \n";
        cout<<c/d;
        break;
            }
    }
}clo1;
int main ()
{
    int j= clo1.a;
    int k= clo1.b;
    cout<<"enter the 1 number"<<endl;
    cin>>j;
    cout<<"enter the 2 number"<<endl;
    cin>>k;
    clo1.cal(j,k);

    return 0;
}
