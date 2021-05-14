#include<bits/stdc++.h>
using namespace std;

class Student // abstract class no object is defined the class is not inherited
{
    protected :
    int roll_number;
    public:
    void set_number(int a)
    {
        roll_number = a;
    }

    void get_number()
    {
        cout<<"roll_number = "<<roll_number<<"\n" ;
    }
};

class Test : public virtual Student
{
    protected :
    float part1,part2;
    public :
    void set_marks(float a ,float b)
    {
        part1 = a;
        part2 = b;
    }

    void get_marks()
    {
        cout<<"Part 1 = "<<part1<<"\n";
        cout<<"Part 2 = "<<part2<<"\n";
    }  

};

class Sports : public virtual Student
{
    protected : 
    float score;
    public :
    void set_score(float s)
    {   score = s;}

    void get_score()
    {   cout<<"Sport score = "<<score<<"\n";}
};

class result : public Test , public Sports
{
    float total; 
    public :
    void display();
    
};

void result::display()
{
    total = part1 + part2 + score ; 

    get_number();
    get_marks();
    get_score();

    cout<<"Total Score = "<<total<<"\n";
}

int main()
{
    result st;
    st.set_marks(27.5,33.0);
    st.set_number(1234);
    st.set_score(6.0);
    st.display();
}
