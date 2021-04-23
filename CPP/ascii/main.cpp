#include<iostream>
using namespace std;
int main()
{
    int a=0;
        cout<<"Enter character:";
        cin>>a;
    while(a!=63)

    {
        if (a>64 && a<91)
        {
            cout<<"It's capital letter";
        }

    else if (a>96 && a< 123)
    {
        cout<<"It's small letter";
    }
    else if (a>47 && a<58)
    {

        cout<<"It's number ";
    }
    }
    return 0;
}
