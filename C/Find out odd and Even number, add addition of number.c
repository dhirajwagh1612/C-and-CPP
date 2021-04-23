// function in c language
# include<stdio.h>
int main()
{
    add();
    odd();
}

add()
{
    int a,b,c;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    c=a+b;                          // formula to make addition
    printf("sum is %d",c);
    return 0;

}
odd()
{
    int a;
printf("Enter number");
scanf("%d",&a);
if (a%2==0)
{

    printf("number is even");
}
else
{

    printf("number is odd");
}

}


