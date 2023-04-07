/*   10. Write a C++ program to implement Hash Table using Template Class.      */
#include<iostream>
using namespace std;
template<typename T>
class Hash
{
     T arr[10];
public:
     void pus(T n)
     {
          int loc=n%10;
          arr[loc]=n;
          cout<<"set data in success full in hash table "<<n<<" -> "<<loc<<endl;
     }
     void serch(T n)
     {
          int loc=n%10;
          if(n==arr[loc])
               cout<<n<<" found in "<<loc<<endl;
          else
               cout<<n<<" Not found "<<endl;
     }
};
int main()
{
     Hash <int >h1;
     h1.pus(312);
     h1.pus(555);
     h1.pus(831);
     h1.pus(500);

     h1.serch(200);
     h1.serch(312);
}
