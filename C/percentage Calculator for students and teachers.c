#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float g,h,i;
    printf("Enter marathi subject mark out of 100\n");
    marathi:
    scanf("%d",&a);
    if(a>100)
    {
         printf("Enter marathi subject mark below 100\n");
         goto marathi;
    }
    printf("Enter Hindi subject mark out of 100\n");
    Hindi:
    scanf("%d",&b);
    if (b>100)
    {
        printf("Enter Hindi subject mark below 100\n");
        goto Hindi;
    }
    printf("Enter English subject mark out of 100\n");
    English:
    scanf("%d",&c);
    if(c>100)
    {
        printf("Enter English subject mark below 100");
        goto English;
    }
    printf("Enter maths subject mark out off 100\n");
    maths:
    scanf("%d",&d);
    if(d>100)
    {
        printf("Enter maths subject mark below 1000\n");
        goto maths;
    }
    printf("Enter science subject mark out of 100\n");
    science:
    scanf("%d",&e);
    if(e>100)
    {
        printf("Enter science subject mark below 100");
        goto science;
    }
    g=a+b+c+d+e;
    h=g/500;
    i=h*100;
    printf("\nyour average percentage is %f \n",i);
    if(i<35)
    {
        printf("\nyou are fail");
    }
else if(i>=35 && i<=60)
    {
        printf("\n congratulations You are passed in second class\n");
    }
    else if (i>=65 && i<=75)
    {
        printf("\ncongratulations you are passed in the first class\n");
    }
    else if(i>=75 && i<=100)
    {
        printf("\ncongratulation you are passed in distiction");
    }

return 0;
}
