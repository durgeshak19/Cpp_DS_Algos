#include<iostream>
using namespace std;

class person
{
    char name[30];
    int age;

    public:
        void getData(void);
        void display(void);
};

void person :: getData(void)
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
}

void person :: display(void)
{
    cout<<"\nName : "<<name;
    cout<<"\nAge : "<<age<<endl;
}

int main()
{
    person p;

    p.getData();
    p.display();

    return 0;
}