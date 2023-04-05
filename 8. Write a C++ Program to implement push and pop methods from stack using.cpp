/*      8. Write a C++ Program to implement push and pop methods from stack using template.       */
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>st1;
    st1.push(5);
    st1.push(6);
    cout<<st1.top()<<endl;
    st1.pop();
    cout<<st1.top()<<endl;
}
