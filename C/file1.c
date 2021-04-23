#include<stdio.h>
int main()
{
    int num;
    FILE* fptr;
    fptr=fopen("E:/c .txt","r");
    if(fptr=NULL)
    {
        printf("error!");
        exit(1);
    }
    printf("Enter number");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}
