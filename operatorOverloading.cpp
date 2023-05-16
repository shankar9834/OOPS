#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real,imag;
    
    public:

    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    
    Complex operator+(Complex const& b)
    {
        Complex a;

        a.real=real+b.real;
        a.imag=imag+b.imag;

        return a;
    }

    void printComplex()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

};

int main()
{
    Complex a(10,5);
    Complex b(12,6);
   /*  a.printComplex();
    b.printComplex(); */

    Complex c=a+b;
    c.printComplex();


}