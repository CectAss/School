#include <iostream>

using namespace std;

int itc_sqrt(int a)
{
    for (int i = 0; i<a; i++){
        if(a-i*i==0)
        {
            return i;
        }
    }
    return -1;
}

int itc_skv(int a)
{
    if (a>=0)
    {
        return a*a;
    }
    return -1;
}

int itc_spr(int a, int b)
{
    if(a>=0 && b>=0)
    {
        return a*b;
    }
    return -1;
}

int itc_str(int a, int b, int c)
{
    if(a>=0 && b>=0 && c>=0)
    {
        int d=(a+b+c)/2;
        return itc_sqrt(d*(d-a)*(d-b)*(d-c));
    }
    return -1;
}

double itc_scir(int a)
{
    if(a>=0)
    {
        return 3.14*double(a)*double(a);
    }
    return -1;
}