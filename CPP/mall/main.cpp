#include <iostream>
#include<string.h>

using namespace std;
class mall
{
public:
    char cust_name[30],cust_phone[10];
    int item_purchased[10];
    float total_bill;
public:
    void userdetails()
    {
        cout<<"enter name please\t";
        cin>>cust_name;
          cout<<"enter phone please\t";
        cin>>cust_phone;
    }
};
class stationary : public mall
{
    string item_category[4] = {"Pencil","Pen","Book","Clip"};
    float price[4]={5.0,10.50,35.4,10.0};
    int aqantity[4]={10,5,2,20};

public:
    void displayitem()
    {
        for(int i = 0;i<4;i++)
        cout<<"\t"<<item_category[i]<<"\t\t"<<price[i]<<"\t"<<aqantity[i]<<"\n";
    }
    float billgeneration1(int itemcat , int qty)
    {
        float bill = price[itemcat-1] * qty;
        return bill;

    }
};
class vegetable : public mall
{
    string item_category[4] = {"onion","lemon","tomato","potato"};
    float price[4]={120.05,5.0,30.0,10.0};
    int aqantity[4]={10,5,2,20};

    public:
    void displayitem()
    {
        for(int i = 0;i<4;i++)
        cout<<"\t"<<item_category[i]<<"\t\t"<<price[i]<<"\t"<<aqantity[i]<<"\n";
    }
    float billgeneration(int itemcat , int qty)
    {
        float bill = price[itemcat-1] * qty;
        return bill;

    }

};
int main()
{
    stationary st1;
    int resp=0,qt=0;
    float a,b;
    mall user1;

   catdecision:
     cout<<"enter item purchase 1:stationay 2:vegetable\n";
    cin>>resp;
    /**********************Stationary**************************/
    if(resp == 1)
    {
     //cout<<"St object is created\n";
   stcheck:
   stationary st2;
    cout<<"Enter further action 1:View 2:Purchase 3:Change Cat 4:Check Out\n";

    cin>>resp;

    switch (resp)
    {
        case 1 :cout <<"\tItem Name"<<"\tPrice"<<"\tAvailable Qty\n";
                st2.displayitem();
                 //cout<<"Enter further action\n 1:View 2:Purchase 3:Change Cat 4:Check Out\n";
                 goto stcheck;
                break ;
        case 2 :cout<<"catdecision Enter further action\n1:Pencil\n2:Pen\n3:Book\n4:Clip\n";
                cin>>resp;
                cout<<"Enter Qty required\n";
                cin>>qt;

                b=st2.billgeneration1(resp,qt);

                cout<<b<<"\n";
                user1.total_bill = user1.total_bill+b;

                //cout<<"Enter further action 1:View 2:Purchase 3:Change Cat 4:Check Out\n";
                 goto stcheck;
                 break;
        case 3: goto catdecision;
                break ;
      }
    }
    /*******************************Veg******************/
    else if(resp == 2)
    {
        check1:
    vegetable st3;
    //cout<<"Veg object is created\n";


    cout<<"Enter further action\n 1:View 2:Purchase 3:Change Cat 4:Check Out\n";


    cin>>resp;


    switch (resp)
    {
        case 1 :cout <<"\tItem Name"<<"\tPrice"<<"\tAvailable Qty\n";
                st3.displayitem();
                 //cout<<"Enter further action\n1:View 2:Purchase 3:Change Cat 4:Check Out\n";
                 goto check1;
                break ;
        case 2 :cout<<"catdecisicion Enter further action\n1:onion \n2:lemon\n3:tomato \n4:potato\n";
                cin>>resp;
                cout<<"Enter Qty required\n";
                cin>>qt;

                a= st3.billgeneration(resp ,qt);
                cout<<a;
                user1.total_bill = user1.total_bill+a;

                //cout<<"Enter further action \n1:View 2:Purchase 3:Change Cat 4:Check Out\n";
                 goto check1;
                 break;
        case 3: goto catdecision;
                break ;

    }

    }
    cout<<"\nTotal is ="<<user1.total_bill;
    return 0;
}
