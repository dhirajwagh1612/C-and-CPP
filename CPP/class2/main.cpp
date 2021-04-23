#include <iostream>
#include<stdio.h>

using namespace std;


class jspm
{
public:
    char st_n[30], st_id[10], st_phone[10];
    void jspm_datadisplay()
    {
        cout<<"\n"<<st_n<<"\n"<<st_id<<"\n"<<st_phone;
    }

};
class mech_dept : public jspm
{
    public:
    int m3=0, som=0, mp=0, ms=0, thermo=0;
    void score()
    {
        cout<<m3<<som<<mp<<ms<<thermo;
    }
};
class comp_dept : public jspm
{
    private:
    int os=0, ppl=0, ml=0, ai=0, cna=0;
    public:
    void score(int a)
    {
        os = a;
        cout<<os<<ppl<<ml<<ai<<cna;
    }
};
class lib : public comp_dept , mech_dept
{
    public:
    int book1;
    void score()
    {
        cout<<book1;
    }
};


int main()
{
mech_dept st1;
comp_dept st2;
int temp = 0;
lib st3;
cout<<"Please enter the CS Student Name";
cin>>st2.st_n;
cout<<"Please enter the CS Student Id";
cin>>st2.st_id;
cout<<"Please enter the CS Student Phone No";
cin>>st2.st_phone;
cout<<"Please enter the CS Student OS Score";
cin>>temp;
st2.score(temp);



}
