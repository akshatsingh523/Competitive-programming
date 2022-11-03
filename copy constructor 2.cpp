#include <iostream>
using namespace std;

class code
{
    public:
    int id;
    code(int a)
    {
        id=a;
    }
    code(code& o)
    {
        id=o.id;
    }
    int getdata()
    {
        cout<<"The value of id is: "<<id<<endl;
        return 0;
    }
};

int main ()
{
   code o(100);
   code o1(o);//copy constructor is called
   o.getdata();
   o1.getdata();
    return 0;
}

