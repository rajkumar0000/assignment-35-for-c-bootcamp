/*      3. Write a C++ program to find the largest of three elements using a template.      */
#include<iostream>
using namespace std;
template <class tmp1 , class tmp2 , class tmp3>
tmp1 find_largest(tmp1 x , tmp2 y , tmp3 z)
{
    if(x>y&&x>z)
        return x;
    if(y>x&&y>z)
        return y;
    if(z>y&&z>x)
        return z;
    else
        return x;
}
int main()
{
    double max_=find_largest<int,float,double>(5.4,2,6.8);
    cout<<"max is -> "<<max_;
}
