#include<bits/stdc++.h>
using namespace std;

class Media 
{
    
    char title[50];
    float price ;
    public:
    char* getTitle()
    {
        return title;
    }
    float getPrice()
    {
        return price;
    }

    Media()
    {
        
        strcpy(title,"");
        price = 0;
    }
    Media(char *str , float a)
    {
        strcpy(title,str);
        price = a;

    }
    virtual void display(){}
};

class Book : public Media
{
    int pages;
    public :
    Book(char *str , float a , int p) : Media(str,a)
    {
        pages = p;
    }

    void display()
    {
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Price : "<<getPrice()<<endl;
        cout<<"Pages : "<<pages<<endl;
    }

};
class Tape : public Media
{
    float time;
    public :
    Tape(char *str , float a , float p) : Media(str,a)
    {
        time = p;
    }

    void display()
    {
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Price : "<<getPrice()<<endl;
        cout<<"Time : "<<time<<endl;
    }

};


int main()
{
    Media m1;
    //Media *m2;
    char x[20] = "TheBookThief";
    Book b(x, 399.99 , 200);
    Tape t(x,495.50,20.45);

    m1 = b;
    m1.display();
    m1 = t;
    m1.display();
}