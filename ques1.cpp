
#include<iostream>
using namespace std;
class account
{
    int bal,tran;
    char acctype;
public:
    void Withdraw( float amt);
    float balance();
    void display();
};
void account :: newacc()
{
cout<<"New Account";
cout<<"Enter the Name of the depositor : "<<endl;
cin>>get(name,19,'');
cout<<"Enter the Account Number : "<<endl;
cin>>acno;
cout<<"Enter the Account Type :(Type A/Type B) "<<endl;
cin>>acctype;
cout<<"Enter the Amount to Deposit : "<<endl;
cin >>bal;
}
void account:: void display()
{
    cout<<"name of accountholder"<<name<<endl;
    cout<<"ACCOUNT BALANCE"<<bal<<endl;
    cout<<"account type"<<acctype<<endl;
}
class manager
{
    int accno;
public:
    void addaccount(account a);
    void witdrawal(double amt, int accno);

};
void manager:: void addaccount(acount a)
{
    cout<<" new account added""<<endl;
}
void manager:: void withdrawal(double amt,int accno)
{
    cout<<"amount withdrawn"<<endl;
}

void account :: void withdraw(float amt)
{
    if(obj.acctype=='A')
   {
       bal= bal-amt;
       tran++;
   }
   else
    {
        bal=bal-amt-10;
        tran++;
   }
      cout<<"updated balance "<<bal<<endl;
}
void account :: float balance()
{
    cout<<"your balance is :"<<bal<<endl;
}
int main()
{
 void main(void)
{
clrscr();
account obj;
int amt;
int choice  =1;
while (choice != 0 )
{
cout<<"Enter 0 to exit"<<endl;
cout<<"1. Initialize a new acc."<<endl;
cout<<"2. Display"<<endl;
cout<<"3. Withdraw"<<endl;
cout<<"4. account balance"<<endl;
cin>>choice;
switch (choice)
{
   case 1: obj.newacc();
        break;
    case 2: obj.displsy();
        break;
    case 3:cout<<"enter acctype(A/B)"<<endl;
            cin>>acctype;
           cout<<"enter the amount to be witdrawn" <<endl;
            cin>>amt;
            obj.Withdraw(int amt);
        break;
    case 4: obj.balance();
        break;
    default: cout<<"invalid choice"<<endl;
}
}
getch();
}

}
