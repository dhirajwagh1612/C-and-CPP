#include <iostream>
#include<stdio.h>
using namespace std;

class stu
{
    int a=10, b=20;
public:
    void add(int a, int b);
    void add (float a, int b);
    void add(int a, float b);
    void add (int a,float b, int k);
}clo1;
void stu:: add(int i, int j)
{
    cout<<"\n"<<i+j;
}
void stu:: add(float i,int j)
{
    cout<<"\n"<<i*j;
}
void stu :: add(int i, float j)
{
    cout<<"\n"<<i-j;
}
void stu :: add(int i, float j, int k )
{
    cout<<"\n"<<i/j;
}
int main()
{
    int a=0, b=0;
    float c=0.0;
    cout<<"Enter first number \n";
    cin>>a;
    cout<<"Enter second number \n";
    cin>>b;
    cout<<"Enter third number\n";
    cin>>c;
    clo1.add(a,b);
    clo1.add(c,b);
    clo1.add(a,c);
    clo1.add(a,b);
    return 0;
}
