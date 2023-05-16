#include<bits/stdc++.h>
using namespace std;


class parent{
    public:

    void printData()
    {
        cout<<"printing from parent"<<endl;
    }
};


class subclass1:public parent{
  
  public:
 // overridding method from parent class
  void printData()
  {
    cout<<"printing from subclass1"<<endl;
  }
};

class subclass2:public parent{
   
    public:
// overridding method from parent class
  void printData()
  {
    cout<<"printing from subclass2"<<endl;
  }

};
int main()
{
     subclass1 s1;
     subclass2 s2;

     s1.printData();
     s2.printData();

}