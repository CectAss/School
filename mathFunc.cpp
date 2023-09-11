#include <iostream>

using namespace std;

int itc_abs(int a)
{
    if (a<0)
        {
            a=a*-1;
        }
    return a;
}

double itc_fabs(int a)
{
    if (a<double(0))
        {
            a=a*double(-1);
        }
    return a;
}

int itc_revnbr(int a)
{
    return (a-a/10)*100 + (a/10-a/100*10)*10 + (a/100);
}

bool itc_iseven(int a)
{
    if (a%2==0)
    {
        return true;
    }
    return false;
}

