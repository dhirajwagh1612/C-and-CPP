#include<stdio.h>
#include<math.h>
int main()
{
    int b,p,q,r,s,t;
    int u,v,w,x,y;
    int jspm();
    b=jspm();
    if (b==1)
    {
    printf("Enter value of principle\t\n");
    scanf("%d",&p);
    printf("Enter value of duration\t\n");
    scanf("%d",&q);
    printf("Enter value of rate\t\n");
    scanf("%d",&r);

        s=p*q*r;
        t=s/100;

        printf("simple intrest is %d\t\n",t);
    }
    else if(b==2)

    {
        printf("Enter value of principle\t\n");
        scanf("%d",&u);
        printf("Enter the value of intrest rate\t\n");
        scanf("%d",&v);

        printf("number of time period\t\n");
        scanf("%d",&x);
        y=u*(pow(v+(v/100),x));

        printf("value of compound is %d\t\n",y);
    }

}
 int jspm()
{
    int b;
    printf("Enter your operation\n 1:simple\n 2:compound \n");
    scanf("%d",&b);
    return b;
}
