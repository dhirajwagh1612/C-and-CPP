#include <stdio.h>
int main()
{
    int x=5, *p;
    p=&x;
    int **q,***r;
    q=&p;
    r=&q;
    printf("%d",r);
    while (p<10)
    {

        printf("%d",*p+1);
    }
}
