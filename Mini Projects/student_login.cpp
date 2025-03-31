#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class temp
{
    string username,Email,Password;
    string searchName,searchPass,searchEmail;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;
void temp:: signUP()
{
    cout<<"\nEnter Your User Name::";
    cin.ignore();
    getline(cin,username);
    cout<<"Enter your Email Address ::";
    cin.ignore();
    getline(cin,Email);
    cout<<"Enter Your Password::";
    cin.ignore();
    getline(cin,Password);

    file.open("loginData.txt",ios ::out | ios :: app);
    file<<username<<"*"<<Email<<"*"<<Password<<endl;
    file.close();
}
void temp ::login()
{
    string searchName,searchpass;
    cout<<"----------Login---------"<<endl;
    cout<<"Enter Your Username ::"<<endl;
    cin.ignore();
    getline(cin,searchName);
    cout<<"Enter Your Password::"<<endl;
    cin.ignore();
    getline(cin,searchpass);

    file.open("loginData.txt",ios::in);
    
    getline(file,username,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    while ((!file.eof()))   
    {
        if(username==searchName)
        {
            if(Password==searchpass)
            {
                cout<<"\nAccount Login Successfull...!"<<endl;
                cout<<"\nUsername :: "<<username<<endl;
                cout<<"\nEmail::"<<Email<<endl;
            }
        }
        else
        {
            cout<<"Password is incorrect"<<endl;
        }
    getline(file,username,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    }
    file.close();
}
void temp::forgot()
{
    cout<<"\nEnter Your Username :: ";
    cin.ignore();
    getline(cin,searchName);
    cout<<"\nEnter Your Email Address :: ";
    cin.ignore();
    getline(cin,searchEmail);

    file.open("login.txt",ios::in);
    getline(file,username,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    while (file.eof())
    {
        if(username == searchName)
        {
            if(Email == searchEmail)
            {
                cout<<"\nAccount Found...!";
                cout<<"Your Password :: "<<Password<<endl;
            }
            else
            {
                cout<<"NOT found...!\n";
            }
        }
    }
    file.close();
}




int main(int argc, char const *argv[])
{
    char choice;
    cout<<"\n1-Login";
    cout<<"\n2-Sign-up";
    cout<<"\n3-Forgot Password";
    cout<<"\n4-Exit";
    cout<<"\nEnter Your Choice::";
    cin>>choice;
    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
    obj.signUP();
        break;

    case '3':
    obj.forgot();
        break;

    case '4':
        return 0;
        break;
    default:
        cout<<"Wrong Choice Enter"<<endl;
        break;
    }
    return 0;
}
