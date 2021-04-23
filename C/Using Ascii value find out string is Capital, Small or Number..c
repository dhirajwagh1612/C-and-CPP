#include<stdio.h>
int main()
{
    int i=0;
    while(i!=63)
    {

        scanf("%c",&i);




    if((i>64)&& (i<91))
    {
        printf("it's capital letter");
    }
    else if((i>96)&&(i<123))
    {
        printf("it's small letter");
    }
    else if((i>47)&&(i<58))
    {

        printf("it's number");
    }
    }

return 0;
}
