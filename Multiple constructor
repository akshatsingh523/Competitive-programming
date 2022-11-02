#include <iostream>
using namespace std;

class integer
{
    public:
    int m,n;
    integer(int a,int b)
    {
        m=a;
        n=b;
    }
    integer(integer &i)
    {
        m=i.m;
        n=i.n;
    }
    
    int getdata()
    {
        cout<<"The value of m is: "<<m<<endl;
        cout<<"the value of n is: "<<n<<endl;
        return 0;
    }
};

int main ()
{
    integer i(10,20);
    integer i1=i;//copy constructor calledd
    i.getdata();
    i1.getdata();
    return 0;
}

