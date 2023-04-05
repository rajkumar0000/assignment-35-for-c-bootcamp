/*
1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.			*/
#include<iostream>
using namespace std;

template <class tmp >
tmp addition(tmp x , tmp y)
{
    return x+y;
}
int main()
{
    float add_number=addition<double>(5,7.5);
    cout<<"addition of two numbers using template is "<<add_number;
}
