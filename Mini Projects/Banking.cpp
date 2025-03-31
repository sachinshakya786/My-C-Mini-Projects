#include<iostream>
#include<string.h>
using namespace std;
class Banking
{
    string name;
    int accc_number;
    int Pin;
    int Money=0;
    public:
    void open_account()
    {
        cout<<"Enter Your name ";     
        cin.ignore();                   //Delete one or more character from buffer
        getline(cin,name);
        cout<<"Make your Pin "<<endl;
        cin>>Pin;
        cout<<"Enter First Deposit = "<<endl;
        cin>>Money;
        cout<<"Money has been deposited Thanks for Coming"<<endl;
        cout<<"."<<endl;
        cout<<"."<<endl;
        cout<<"."<<endl;
    }
    void Deposit()
    {
        cout<<"Enter Your Money "<<endl;
        int x;
        cout<<"Enter Money to Deposit "<<endl;
        cin>>x;
        Money=Money+x;
        cout<<"Total Money After Deposit= "<<Money;
        cout<<"."<<endl;
        cout<<"."<<endl;
        cout<<"."<<endl;
    }
    void Withdraw()
    {
        int x;
        cout<<"Enter Pin = "<<endl;
        cin>>x;
        if(Pin == x)
        {
        int y;
        cout<<"Enter Withdraw Money = ";
        cin>>y;
        Money=Money-y;
        cout<<"Your Money "<<y<<" has been Debited from Your Account"<<endl;
        cout<<"Remaining Balance = "<<Money<<endl;
        cout<<"."<<endl;        
        cout<<"."<<endl;        
        cout<<"."<<endl;               
        }
        else
        cout<<"Wrong Pin"<<endl;

    }
    void Display_Details()
    {
        cout<<"Your Name is = "<<name<<endl;
        // cout<<"Your Account number is "<<accc_number<<endl;
        cout<<"Your Money is = "<<Money<<endl;
        cout<<"."<<endl;        
        cout<<"."<<endl;        
        cout<<"."<<endl;        
        cout<<"."<<endl;        

    }
};
int main(int argc, char const *argv[])
{
    Banking a;
    int x;
    do
    {
    cout<<"Choose Option "<<endl;
    cout<<"1 . Open Account"<<endl;
    cout<<"2 . Deposit Money"<<endl;
    cout<<"3 . Withdraw Money"<<endl;
    cout<<"4 . Account Details"<<endl;
    cout<<"5 . Exit"<<endl;
    cin>>x;
        switch (x)
        {
        case 1:
            a.open_account();
            break;
        case 2:
            a.Deposit();
            break;
        case 3:
            a.Withdraw();
            break;
        case 4:
            a.Display_Details();
            break;
        case 5:
            exit(0);
        }
    } while (x!=5);
    
    return 0;
}