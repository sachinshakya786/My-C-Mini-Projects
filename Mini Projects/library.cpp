#include<iostream>
#include<string>
using namespace std;
class Book{
    int id;
    string title;
    string author_name;
    string issued;
    string issued_to;
    public:
    void set_book_details()
    {
        int i;
        string p;
        string s;
        cout<<"Enter Book id = "<<endl;
        cin>>i;
        cin.ignore();
        cout<<"Enter Title = "<<endl;
        getline(cin,p);
        cout<<"Enter Author name"<<endl;
        cin.ignore();
        getline(cin,s);
    }
    void issue_toBook()
    {
        int x;
        cout<<"Enter your name = "<<endl;
        cin.ignore();
        getline(cin,issued_to);
        cout<<"Enter book id you want to issue "<<endl;
        
        
    }
    void returnBook()
    {
    

    }
    void Display()
    {

    }
};
int main(int argc, char const *argv[])
{
    Book a[10];
    int x,index=0;
        
    do
    {
        cout<<"1 .Set Book Details"<<endl;
        cout<<"2 .Issue Book"<<endl;
        cout<<"3 .Return Book"<<endl;
        cout<<"4 .Display Book details"<<endl;
        cout<<"5 .Exit"<<endl;
        cout<<"Enter choice = "<<endl;
        cin>>x; 
        switch (x)
        {
        case 1:
        a[index].set_book_details();
        index++;
            break;
        
        case 2:

            break;

         case 3:

            break;
        
        case 4:
            break;
        
        case 5:
            break;
        }
    } while(x!=5);
    
    
    return 0;
}