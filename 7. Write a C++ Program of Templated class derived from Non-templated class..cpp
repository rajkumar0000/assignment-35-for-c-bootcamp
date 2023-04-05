/*  7. Write a C++ Program of Templated class derived from Non-templated class. */

#include<iostream>
#include<string.h>
using namespace std;
class bass
{
    char name[50];
public:
    bass(){}
    bass(char c[])
    {
       strcpy(name,c);
    }
    void display()
    {
        cout<<"name -> "<<name<<endl;
    }
};
template <class tmp1>
class derived : public bass
{
    int age;
public:
    derived(tmp1 a)
    {
        age=a;
    }
    void display()
    {
        cout<<"age -> "<<age<<endl;
    }
};
int main()
{
    bass b1("raj_kumar");
    b1.display();
    derived <int >d1(21);
    d1.display();
}
