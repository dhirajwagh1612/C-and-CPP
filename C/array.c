#include<stdio.h>

int main()
{
    int i=0;
    char j[10];

    {

        scanf("%c",&i);
        for(int a=0; a<strlen(j);a++)
{

        i=j[a];


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
    }

return 0;
}
