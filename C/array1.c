#include<stdio.h>
#include<string.h>
void main()
{
    int a=0,cl=0,sl=0,n=0;
    char cin[10];

    {
    scanf("%s",&cin);
    for(int i=0;i<strlen(cin);i++)
    {
            a=cin[i];
    if ((a>64) && (a<91))
    {
        printf("it is capital letter \n");
        cl++;
    }
     else if ((a>96) && (a<123))
    {
        printf("it is small letter \n");
        sl++;
    }
     else if ((a>47) && (a<58))
    {
        printf("it is number \n");
        n++;
    }

    }
    if(cl==0 || sl==0 || n==0)
    {
        printf("please enter correct password");
    }
    }
}

