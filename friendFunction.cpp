/*
If a function is defined as a friend function in C++, 
then the protected and private data of a class can be accessed using the function. 

A class’s friend function is defined outside that class’s scope, 
but it has the right to access all private and protected members of the class.

Even though the prototypes for friend functions appear in the class definition,friends are not member functions.

A friend function in C++ is a function that is preceded by the keyword “friend.”

*/


/*

Characteristics of friend function: 
1)A friend function can be declared in the private or public section of the class. 

2)It can be called a normal function without using the object. 

3)A friend function is not in the scope of the class, of which it is a friend.

4)A friend function is not invoked using the class object as it is not in the class’s scope. 

5)A friend function cannot access the private and protected data members of the class directly. 
  It needs to make use of a class object and then access the members using the dot operator. 

6)A friend function can be a global function or a member of another class.

*/

#include<bits/stdc++.h>
using namespace std;

class Square{
    private:
    int radius;

    public:
    Square()
    {
        radius=10;
    }

   friend int printAddedRadius(Square a) ;

};


int printAddedRadius(Square b){
      
      b.radius+=5;

      return b.radius;
}


int main()
{
    
    Square c;

    cout<<"printing added radius of square c "<<printAddedRadius(c)<<endl;
}