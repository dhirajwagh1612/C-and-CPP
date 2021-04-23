#include<stdio.h>
int main()
{
    float a=0,b=0;
    int c=0;
    printf("please enter operator 1:+\n 2:-\n 3:* \n 4:/\n  ");
    scanf("%d",&c);
    printf("Enter value of number 1\t");
    scanf("%f",&a);
    printf("Enter value of number 2\t");
    scanf("%f",&b);
    switch (c)
    {
    case ('1'):
        {
            printf("addition is %f\n",a+b);
            break;
        }
    case ('2'):
        {
            printf("substraction is %f\n",a-b);
            break;
        }
    case ('3'):
        {
            printf("multiplication is %f\n",a*b);
            break;
        }
        case ('4'):
        {
            printf("division is %f\n",a/b);
            break;
        }

    }
    return 4;
}
