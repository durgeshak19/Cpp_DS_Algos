#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"A\n";
    }
};

class B : public A
{
    public:
    void display()
    {
        cout<<"B\n";
    }
};

int main()
{
    B b;
    b.display();
    b.A::display();
}