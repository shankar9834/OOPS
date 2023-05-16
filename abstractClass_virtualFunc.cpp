#include <bits/stdc++.h>


using namespace std;



class A{
    public:

    virtual void printData(){
        cout<<"printing in A"<<endl;   
    }

    void getData()
    {
        cout<<"getting data in A"<<endl;
    }

   
};



class B:public A{
    public:

    void printData()
    {
        cout<<"printing in B"<<endl;
    }
    void getData()
    {
        cout<<"getting data in B"<<endl;
    }

};



//class with atleast one pure virtual function is called abstract class , we cannot create object from abstract class but 
// we can derive other classes from abstract class . 
//But we must override that function in the derived class; otherwise, the derived class will also become an abstract class
//abstract class can have normal functions and variables along with pure virtual functions
class C{
    public:
     virtual void setData()=0; //pure virtual funtion
};


class D:public C{

  public:
  void gameScore()
  {
    cout<<"printing in D";
  }  
};


class E:public C{
    public:
    void setData()
    {
        cout<<"setting data in E"<<endl;
    }
};


int main()
{

    B b;
    A *p=&b;
    p->printData();  // calls method in derived class 
    p->getData();    //calls method in base class 
    
    // above is the difference because of using virtual function
    //virtual function can be overriden and can be called from pointer of type base class


  //  D d;  // this gives error because we havent implemented a pure virtual function in derived class D
    
    E e;
    e.setData();   // this doesnt give error because we have implemented a pure virtual function 
    
}
