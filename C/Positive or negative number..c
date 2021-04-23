# include<stdio.h>
#define pi 3.142
int main()
{
    int a;
printf( "Please enter  the number");
scanf("%d",&a);
if (a>0)
{

    printf("Number is greater than zero i.e positive ");

}
else if (a==0){
    printf("Enter number is zero");
}
else {
    printf("Entered number is negative");
}

return 0;
}
