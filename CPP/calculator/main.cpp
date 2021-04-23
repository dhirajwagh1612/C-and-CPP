#include<iostream>
using namespace std;
int main()
{
    int a=0, b=0, c=0;
    cout <<"Enter number 1"<<endl;
    cin >>a;
    cout<<"Enter number 2"<< endl;
    cin>>b;
    cout<<"Enter operator \n 1: + \n 2: - \n 3: * \n 4: /"<< endl;
    cin >>c;
    if (c==1)
    {
        cout<< "addition of two numbers is "<< a+b;

    }
    else if (c==2)
    {
        cout <<"substraction of two numbers is "<<a-b;

    }
    else if (c==3)
    {
        cout <<"multiplication of two numbers is "<<a*b;

    }
    else if (c==4)
    {
        cout<<"division of two numbers is "<<a/b;
    }
    return 0;
}
