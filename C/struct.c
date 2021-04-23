#include<stdio.h>
int main()
{
    int n=0;
    struct stpf
    {
        char name[10], emailid[10], address[10];
        int age, rollnum;
    }
    st[100];
    printf("\n please enter number of structure \t ");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        printf("\n please enter %d name \n ",i+1);
        scanf("%s",&st[i].name);
        printf("\n please enter email id \n ");
        scanf("%s",&st[i].emailid);
        printf("\n please enter address\n");
        scanf("%s",&st[i].address);
        printf("please enter age");
        scanf("%d",&st[i].age);
        printf("please enter roll number\n");
        scanf("%d",&st[i].rollnum);
    }
    onemore:
        printf("\n please enter student id ");
        scanf("%d",&n);
        printf("\n student name : \t %s",st[n].name);
        printf("\n student email id : \t %s ", st[n].emailid);
        printf("\n student address : \t %s", st[n].address);
        printf("\n student age : \n %d", st[n].age);
        printf("\n student roll number : %d",st[n].rollnum);
        printf("\n Do you want to see one more (1)/Exit (2)");
        scanf("%d",&n);
        if (n!=2)
            goto onemore;
return 0;

}
