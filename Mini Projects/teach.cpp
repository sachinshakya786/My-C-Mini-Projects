#include<bits\stdc++.h>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    public:
    Complex(int a=0,int b=0)
    {
        real=a;
        imaginary=b;
    }
    void Display()
    {
        cout<<"Complex no. is = "<<real<<" +i"<<imaginary<<endl;
    }
    Complex operator+(Complex a)
    {
        Complex s;
        s.real=real+a.real;
        s.imaginary=imaginary+a.imaginary;
        return s;
    }
    
};
int main(int argc, char const *argv[])
{
    Complex a(2,6),b(5,6),c;
    c=a+b;
    a.Display();
    b.Display();
    c.Display();
    return 0;
}
