#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
void binarytodecimal (char input[])

{
    int a=strlen(input),sum=0;
    for(int i=0; i<a; i++)
    {
        if(input [i] =='1')
        {
            int n=(a-1)-i;
            sum = sum+pow(2,n);
        }
    }
        cout<<sum;
}
    int main()
    {
        binarytodecimal ("10");
        return 0;
    }

