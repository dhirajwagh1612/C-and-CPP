#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    float score=0;
    exam:
    cout << "welcome, seventh sense \n Do you want to continue exam \n 1: yes  \n 2: no " << endl;
    cin>>a;
    if(a==1)

    {
        cout<<"start the exam \n ";

        cout<<"\n Que 1: which of the following is capital of india?\n 1: Delhi \n 2: Mumbai \n 3: Bhopal \n 4: chennai\n";
        cin>>b;
        if (b == 1)
        {
            cout<<"correct answer";
            score = score +1;
        }
        else if (b==2 || b== 3 || b== 4)
        {
        cout<<"wrong answer, correct answer is Delhi";
        score = score -0.5;

        }
        cout<<"\n Que 2 : which of the following is financial capital of india? \n 1: Delhi \n 2: Mumbai \n 3: Bhopal \n 4: chennai\n";
    cin>>c;
    if (c==2)
    {
        cout<<"correct answer";
        score = score +1;
    }
    else if (c==1 || c== 3 || c== 3)
    {
        cout<<"wrong answer, correct answer is Mumbai";
        score = score -0.5;
    }
    cout<<" \n Que 3 :what is capital of maharashtra? \n 1: Delhi \n 2: Mumbai \n 3: Bhopal \n 4: chennai\n";
    cin>>d;
    if (d==2)
    {
        cout<<"correct answer";
        score = score +1;
    }
    else if (d==1 || d== 3 || d== 3)
    {
        cout<<"wrong answer, correct answer is Mumbai";
        score = score -0.5;
    }
    cout<<"\n Que 4 : who is the prime minister of india \n 1: Narendra modi \n 2. Uddhav thahare \n  3: sainath wadgoankar \n 4: ajinkya tawar\n";
    cin>>e;
    if (e == 1)
        {
            cout<<"correct answer";
            score = score +1;
        }
        else if (e==2 || e== 3 || e== 4)
        {
        cout<<"wrong answer, correct answer is narendra modi ";
        score = score -0.5;

        }
        cout<<"\n Que 5 : who is the cheif minister of maharashtra \n 1: Narendra modi \n 2. Uddhav thahare \n  3: sainath wadgoankar \n 4: ajinkya tawar\n";
       cin>>f;
       if (f==2)
    {
        cout<<"correct answer\n \n your score is \t";
        score=score+1;
    }
    else if (f==1 || f== 3 || f== 3)
    {
        cout<<"wrong answer, correct answer is Uddhav thakare\n ";
        score = score -0.5;
    }

    cout<<((score/5)*100)<<"%\n";
    if (((score/5)*100)>=40)
    {
        cout <<"\ncongratulations ! , you are passed";
    }
    else
        {
            cout<<"you are fail";
        }

    }
    else if (a==2)
    {
        cout<<"Exam is compulsary. Please try to attempt\n";
        goto exam;
    }
return 0;
}
