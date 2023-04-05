/*  2. Write a C++ Program to find Largest among two numbers using function template.   */
#include<iostream>
using namespace std;
template <class tmp1 ,class tmp2>
tmp1 find_largest(tmp1 x , tmp2 y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    float largest = find_largest<double,int>(5.6,4);
    cout<<"Largest -> "<<largest;
}
