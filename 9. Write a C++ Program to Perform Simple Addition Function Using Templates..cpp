/*  9. Write a C++ Program to Perform Simple Addition Function Using Templates. */
#include<iostream>
using namespace std;
template<class tmp1, class tmp2>
tmp1 Addition(tmp2 x, tmp2 y)
{
     return x+y;
}
int main()
{
     double d1=Addition<float>(5.5,8.2);
     cout<<d1;
}
