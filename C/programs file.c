#include<stdio.h>
int main()
{
    int a=0, b=0, decision=0;
    printf("Enter number 1\n");
    scanf("%d",&a);
    printf("Enter number 2\n");
    scanf("%d",&b);
    printf("Enter operations\n 1:+\n 2:- \n 3:* \n 4:%\n");
    scanf("%d",&decision);
    if(decision ==1)
    {
        printf("addition of numbers is %d",a+b);

    }
    else if(decision==2)
    {
        printf("substraction of two number is %d",a-b);
    }
    else if(decision==3)
    {
        printf("multiplication of two number is %d",a*b);
    }
    else if (decision==4)
    {
        printf("division of two number is %d",a%b);
    }
    return 0;

}
