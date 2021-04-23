#include<stdio.h>
void main()
{
    int b;
    int jspm();
    b=jspm();
     printf("You Enterd simple intrest is %d",b);
}
jspm()
{
    int p,q,r,b,a;
    printf("Enter the principle value ");
    scanf("%d",&p);
    printf("Enter Period");
    scanf("%d",&q);
    printf("Enter rate");
    scanf("%d",&r);
    a=p*q*r;
    b=a/100;
}
