# include <stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter values for 1st matrix");
    for (i=0; i<=2; i++)
    {
        for(j=0;j<=2; j++)
        {
           scanf("%d",&A[i][j]);
        }

    }
    printf("Enter the values for second matrix");
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            scanf("%d",&B[i][j]);
        }

    }
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)

        C[i][j]=A[i][j]+B[i][j];
        printf("\naddition for matrix is %d\n",C[i][j]);

    }

    return 0;
}
