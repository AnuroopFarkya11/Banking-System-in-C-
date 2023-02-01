#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void line(int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<"**";
    }
    cout<<endl;
}
void space(int l,int t)
{
    for(int i=0; i<l; i++)
    {
        cout<<endl;
    }
    for(int i=0; i<t; i++)
    {
        cout<<"\t";
    }
}
class Bankact
{
    char *nptr;
    unsigned int actnum;
    int type;
    unsigned int balance;

public:

    Bankact(char *cnptr,unsigned int &an,int &t)
    {
        int l=strlen(cnptr);
        nptr=new char[l];
        strcpy(nptr,cnptr);

        actnum=an;
        type=t;
        balance=10000;
    }
    void display()
    {
        cout<<nptr;
        cout<<strlen(nptr);
        cout<<actnum<<type;
    }
    void withdraw(unsigned int &n);
    void deposit(unsigned int &n);



    ~Bankact()
    {
        space(5,5);
        line(56);
        space(2,10);
        cout<<"DESTRUCTOR IMPLEMENTED!!!";
        space(2,5);
        line(56);
        getch();
    }
};
void Bankact::withdraw(unsigned int &n)
{
    int minbal=2000;
    if((balance-n)>minbal)
    {
        space(2,10);
        cout<<"WITHDRAW SUCCESSFUL";
        space(1,8);
        line(28);

        space(2,10);
        cout<<"CURRENT BALANCE : "<<balance-n;
        space(1,8);
        line(28);
        space(1,8);
        line(28);

    }
    else
    {
        space(2,8);
        cout<<"  WITHDRWA SUCCESSFUL WITH IMPOSED CHARGERS-> Rs 100!";
        space(1,8);
        line(28);

        space(2,10);
        cout<<"CURRENT BALANCE : "<<balance-n-100;
        space(1,8);
        line(28);
        space(1,8);
        line(28);


    }
}
void Bankact::deposit(unsigned int &n)
{
    space(2,10);
    cout<<"DEPOSIT SUCCESSFUL";
    space(1,8);
    line(28);

    space(2,10);
    cout<<"CURRENT BALANCE : "<<balance+n;
    space(1,8);
    line(28);
    space(1,8);
    line(28);

}
int main()
{

    space(17,10);
    cout<<"B A N K  S Y S T E M";
    space(1,8);
    line(28);

    space(2,8);
    cout<<"CUSTOMER NAME \t\t :\t ";
    char narr[20];
    cin>>narr;

    space(2,8);
    cout<<"ACCOUNT NUMBER  \t :\t ";
    unsigned int num;
    cin>>num;

    space(2,10);
    cout<<"SELECT ACCCOUNT TYPE \n";
    space(1,8);
    line(28);
    space(3,9);
    cout<<"1 SAVING"
        <<"\t\t  2 CURRENT";
    space(2,11);
    int ch;
    ch=getch();
    Bankact a(narr,num,ch);

    system("cls");
    space(17,10);
    cout<<"B A N K  S Y S T E M";
    space(1,8);
    line(28);

    space(2,10);
    if(ch==49)
        cout<<"SAVING ACCOUNT";
    else
        cout<<"CURRENT ACCOUNT";
    space(2,8);
    cout<<"AVAILABLE BALANCE \t\t: Rs. 10000 ";
    space(2,10);
    cout<<"SELECT OPERATION\n";
    space(1,8);
    line(28);
    space(3,9);
    cout<<"1 WITHDRAWAL "
        <<"\t\t  2 DEPOSIT";
    space(2,10);
    ch=getch();
    cout<<"ENTER AMOUNT : ";
    cin>>num;

    if(ch==49)
    {
        a.withdraw(num);
    }
    else
    {
        a.deposit(num);
    }

    return 0;

}
