#include<bits/stdc++.h>
using namespace std;

template<class T>
class vec
{
    T *v;
    int size ;

    public:
    vec(int m )
    {
        size = m;
        v = new T[size+1];
        for(int i=0;i<size;i++)
        {
            v[i] = 2 ;
        }
    }

    vec(T *a)
    {
        for(int i=0;i<size;i++)
        {
            v[i] = a[i];
        }
    }

    T operator*(vec &y)
    {
        T sum = 0;
        for(int i=0;i<size;i++)
            sum += this->v[i] * y.v[i];
        return sum;
    }
};


int main()
{
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    vec<int> v1(3);
    vec<int> v2(3);

    v1 = x;
    v2 = y;

    cout<<v1*v2<<endl;
}
