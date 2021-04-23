#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char fip, pip, uans='1',rans ='0';
    FILE *fptr;
   int score=0;
    if (fptr = fopen("E:/c code/cpp code/dhiraj.txt","r"))
    {
        cout<<"Error ! opening file\n";
    }
    while ((fip = fgetc(fptr))!= EOF)
    {
        if (fip ==';')
        {
            cout<<"Your answer please \t";
            cin>>uans;
        }
        else if (fip == ';')
        {
            rans = pip;
            if(uans== rans)
                score= score +2;
            else
                score = score - 0.25;
        }
        else
        {
            cout<<fip;
        }
        pip = fip;
    }
    cout<<"\n"<<score;
    fclose(fptr);

    return 0;

}
