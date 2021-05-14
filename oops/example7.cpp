#include<bits/stdc++.h>
using namespace std;

class Item 
{
    int code;
    float price;
    public :
    Item()
    {
        code = 25;
        price = 50;
    }
    Item(int a, int b)
    {
        code = a;
        price = b;
    }
    void set(int a , int b)
    {
        code = a;
        price = b;
    }

    void get()
    {
        cout<<"Code = "<<code<<endl;
        cout<<"Price = "<<price<<endl;
        cout<<"Total = "<<price+code<<endl;
    }

    
};

int main()
{
    Item *ptr = new Item[2];
    ptr->set(3,2);
    ptr->get();

    (ptr+1)->set(7,3);

    (ptr+1)->get();

    ptr->get();
    delete(ptr);
    return 0;

}