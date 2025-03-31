#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Library
{
   string id,name,author,search;
   fstream file;
   public:
   void addBook()
   {
        cout<<"Enter Book id :: ";
        getline(cin,id);
        cout<<"Enter name ::";
        getline(cin,name);
        cout<<"Enter Author name :: ";
        getline(cin,author);
        
        file.open("S:/poco/library.txt",ios::out|ios::app);
        file<<id<<"*"<<name<<"*"<<author<<endl;
        file.close();
   }
   void showAll()
   {
        file.open("S:/poco/library.txt",ios::in);
        getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
            cout<<"\n\n";
            cout<<"\t\t Book ID \t\t\t Book Name \t\t\t Author's name"<<endl;   
        while (!file.eof())
        {
            cout<<"\t\t "<<id<<" \t\t\t "<<name<<" \t\t\t "<<author<<endl;

            getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
        }
        file.close();
        
   }
   void Extract_book()
   {
    showAll();
    cout<<"Enter Book id::";
    getline(cin,search);
    file.open("S:/poco/library.txt",ios::in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    cout<<"\n\n";
    cout<<"\t\t Book Id \t\t Book Name \t\t\t Author's Name"<<endl;
    while(!file.eof())
    {
        if(search==id)
        {
            cout<<"\t\t "<<id<<" \t\t\t "<<name<<" \t\t\t "<<author<<endl;
            cout<<"Book Extracted Successsfully...!";
        }
        getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
    }
    file.close();
   }  

}obj;
int main(int argc, char const *argv[])
{
    char choice;
    cout<<"--------------------------------------------"<<endl;
    cout<<"1-Show All Books"<<endl;
    cout<<"2-Extract a book"<<endl;
    cout<<"3-Add books(Admin Section)"<<endl;
    cout<<"4-Exit";
    cout<<"--------------------------------------------"<<endl;

    while (1)
    {
        
    cout<<"Enter your choice ";
    cin>>choice;
    switch (choice)
    {
    case '1':
    {
        cin.ignore();
        obj.showAll();
        break;
    }
    case '2':
    {
        cin.ignore();
        obj.Extract_book();
        break;
    }
    case '3':
    {
        cin.ignore();
        obj.addBook();
        break;
    }
    case '4':
    {
        return 0;
        break;
    }
    
    default:
    {
    cout<<"Invalid entries"<<endl;
        break;
    }
    }
    }
    
    return 0;
}
