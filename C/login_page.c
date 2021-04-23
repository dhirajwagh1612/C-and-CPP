#include<stdio.h>
#include<string.h>
void main()
{
    char username[50];
    char password[8];
    char email_id[50];
    char mobile_no[50];
    int cl=0, sl=0, n=0, ev=0 ;
    printf("Enter username\t");
    scanf("%s",&username);
    printf("Enter password\t");
    passvalidation:
    scanf("%s",&password);
    if(strlen(password)==8)
    {
        for(int i=0; i<8; i++)
        {
            int j= password[i];
            if (j>64 && j<91)
            {
                cl++;
            }
            else if (j>96 && j<123)
            {
                sl++;
            }
            else if(j>47 && j<58)
            {
                n++;
            }

        }
        if(sl == 0 || cl == 0 || n==0)
        {
            printf("Please Enter valid Password");
            goto passvalidation;
        }

    }
    printf("Enter email_id\t");
    emailvalidation:
    scanf("%s",&email_id);
    for(int i =0; i<strlen(email_id);i++)
    {
        if (email_id[i]=='@')
        ev++;

    }
    if (ev==0)
    {
        printf("Please Enter valid Password\n");
        goto emailvalidation;
    }
    printf("Enter mobile_no\t");
    scanf("%s",&mobile_no);
    printf("username is: %s\n password is: %s \n email id is: %s \n mobile no:%s\n ",username,password,email_id,mobile_no);


}
