#include <iostream>

using namespace std;

double inc_pow(int num, int step)
{
    double temp = double(num);
    if(step>0)
    {
        for (int i = 0; i<step; i++)
        {
            temp=temp*double(nub);
        }
        return temp;
    }
    else if (step==0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i<step; i++)
        {
            temp=temp*double(nub);
        }
        return 1/temp;
    }
}

bool inc_inpositive(int num)
{
    if(num>=0)
    {
        return true;
    }
    return false;
}

bool inc_inpositive_d(int num)
{
    if(num>=0)
    {
        return true;
    }
    return false;
}