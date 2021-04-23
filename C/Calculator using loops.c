#include<stdio.h>
int main()
{   int a,b,c;
    int d;
    printf("\n Welcome to calculator");
    printf("\npress 10 to continue and type '0' for exit calculator");
    scanf("%d",&d);
    if(d==10)
    {
        printf("\nEnter first value");
    scanf("%d",&b);
    printf("\nEnter Second Value");
    scanf("%d",&c);
    printf("\nWhich Operation do you want to Perform");
    printf("\n1:Addition \n2:Substraction \n3: multiplication \n4: division");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\naddition for two numbers is", b+c);
    }
    if(a==2)
    {
        printf("\nSubstraction for two numbers is", b+c);
    }
    if(a==3)
    {
        printf("\nMultiplication of two numbers is", b+c);
    }
    if(a==4)
    {
        printf("\n Division of two numbers is", b+c);
    }

    }
    else if(d==0)
    {
        printf("thanks for choosing calculator");
    }
    return 0;
}
