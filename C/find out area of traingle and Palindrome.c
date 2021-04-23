#include<stdio.h>
#include<math.h>
int main()
{
    int area,a,b=0,c,s,p,q,r,t;
    // for area calculation
    printf("Enter side 1\n");
    scanf("%d",&a);
    printf("Enter side 2\n");
    scanf("%d",&b);
    printf("Enter side 3\n");
    scanf("%d",&c);
    s=a+b+c;
    p=s-a;
    q=s-b;
    r=s-c;
    t=s*p*q*r;
    area=sqrt(t);
    printf("area of entered triangle is %d",area);
    //check palindrome
    a=c;
    while(c!=0)

    {
        b=b*10;
        b=b+c%10;
        c=c/10;
    }
    if(a=b)
    {
        printf("%d is entered triangle is palindrome\n");
    }
    else
    {
        printf("entered triangle is not palindrome\n");
    }

    return 0;


}
