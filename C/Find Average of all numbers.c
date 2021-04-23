# include <stdio.h>
int main()
{
    int a[10],i;
    int sum;
    float avg;
    printf("Enter 10 num");
    for (i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);


    }
    for (i=0; i<=9; i++)
        {
    sum=sum+a[i];

        }
        avg=sum/10.0;
    printf("average is %d",avg);


    return 0;
}
