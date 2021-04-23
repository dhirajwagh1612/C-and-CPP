# include <stdio.h>
int main()

{
    int choice;
    int a,b,c,d;
    printf("\n 1. addition");
    printf("\n 2. odd even");
    printf("\n 3. Printing N numbers");
    printf("\n 4. Exit");
    printf("\nEnter your choice \t");
    scanf("%d",&choice);
    while(1)
    {


    switch (choice)

    {

    case 1:
        printf("\nEnter two numbers\t");
        scanf("%d%d",&a,&b);
        printf("\naddition of two numbers %d",a+b);
        break;
    case 2:
        printf("\nEnter number of your choice\t");
        scanf("%d",&c);
        if (a%2==0)

        {
            printf("\nnumber is even");
        } else
        {
            printf("\nnumber is odd");
        }
        break;
    case 3:
        printf("\nEnter no of N for printing natural numbers\t");
        scanf("%d",&d);
        for(int e =1; e<=d; e++)
        {
            printf("\n%d\n",e);
        }


        break;
    case 4:
        exit(0);
    default:
        printf("\nInvalid Choice");

    }
    }

    return 0;
}
