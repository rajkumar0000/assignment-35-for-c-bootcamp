/*  5. Write a C++ Program to Add two numbers using function template.  */
#include<iostream>
using namespace std;
template <class tmp>
tmp add(tmp a , tmp b)
{
    return a+b;
}
int main()
{
    int n1=5;
    float n2=8.5;
    float n3=5.3;
    double r;
    r=add(n2,n3);
    cout<<"sum is -> "<<r;
}
