#include<stdio.h>
#include<conio.h>
int main()
{

    float a=0,b=0, c=0;
    printf("Enter number 1\t");
    scanf("%f",&a);
    printf("Enter number 2\t");
    scanf("%f",&b);
    printf("Enter operator\t");
    scanf("%f",&c);
    if (c='*')
    {
        printf("%f",a*b);
    }
    else if (c='+')
    {
        printf("%f",a+b);

    }
    else if (c='-')
    {
        printf("%f",a-b);

    }
    else if (c='/')
    {
        printf("%f",a/b);
    }
    else if (c!='+','-','*','/')
    {
        printf("error ! please, enter correct operator");
    }
    return 0;
}
