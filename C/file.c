#include<stdio.h>
int main()
{
    FILE* fl;
    fl=fopen("E:/c code/example.txt","r");
    if (fl=NULL)
        printf("F");
    else
        printf("P");
    return 0;
}
