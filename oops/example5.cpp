#include<bits/stdc++.h>
using namespace std;

class Person
{
    int a ;
    public:
    Person(){}
    Person(int x)
    {
        a = x;
        cout<<"Base class Constructor called \n";
        cout<<"first arg = " << x <<endl;
        cout<<"Value of base class var = "<<a<<"\n"; 
    }

};


class Student : public Person
{

    int a ;
    public :
    Student(int x , int y): Person(x)
    {
        a = y;
        cout<<"Derived class Constructor called \n";
        cout<<"first arg = " << y <<endl;
        cout<<"Value of derived class var = "<<a<<"\n"; 
    }
};

int main()
{
    Student st(1,2);
    return 0;
}

