/*  4. Write a C++ Program to Swap data using function template.    */
#include<iostream>>
using namespace std;
template <class tmp1,class tmp2>
void swep(tmp1 a , tmp2 b)
{
    cout<<a<<endl<<b<<endl;
    double temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"---------after sewp----------\n";
    cout<<a<<endl<<b<<endl;
}
int main()
{
    swep<int,double>(5,8.7);
}
