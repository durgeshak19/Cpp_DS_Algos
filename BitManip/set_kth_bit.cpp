#include<bits/stdc++.h>
using namespace std;

void setKthBit(int x,int k)
{
    //10010100  x
    //00001000  1 << k
    //10011100  x | (1<<k);
    int res = x | (1<<k);
    std::cout<<res
}

void clearKthBit(int x,int k)
{
    //10010100  x
    //11101111  ~(1<<k)
    //10000100  x &  ~(1<<k);
    int res = x & (~(1<<k));
    std::cout<<res;
}

void flipKthBit(int x , int k )
{
    //10010100  x
    //00010000  1<<k
    //10000100  x^(1<<k)
    int res = x ^ (1<<k);
    std::cout<<res;
}

void extractBitField(int x ,int shift)
{
    int i=4;
    int mask = 0;
    while(i--)
    {
        mask |=1;
        mask = mask<<1;
    }
    mask = mask<<shift;
    //10111 1010 1101  x
    //00000 1111 0000  mask
    //00000 1010 0000  x & mask
    //00000 0000 1010  (x & mask)>>shift
    int res = (x & mask) >>shift;
    std::cout<<res;

}

//set a bit field in a word x to a value y
void setBitField(int x , ,int y , int shift)
{
    int i=4;
    int mask = 0;
    while(i--)
    {
        mask |=1;
        mask = mask<<1;
    }
    mask = mask<<shift;
    //10111 1010 1101  x
    //00000 0000 0011  y //last 4 bits
    //11111 0000 1111  ~mask
    //10111 0000 1101  x & ~mask
    //00000 0000 1010  (x & ~mask) | (y<<shift) // (y<<shift)&mask for safety purposes on x 
    int res = (x & ~mask) | ((y << shift) & mask);
    std::cout<<res;

}
//swap without temp variable
//poor perfomance as it cant exploit instruction level parllelism
void  swap(int &x ,int &y)
{
    //10111101
    //00101110
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}