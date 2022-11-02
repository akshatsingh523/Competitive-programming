#include <iostream>
using namespace std;

class point
{
    public:
    int x,y;
    point(int m,int n)//default constructor
    {
        x=m;
        y=n;
    }
    point(const point& o)//copy constructor 
    {
        x=o.x;
        y=o.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};


int main ()
{
    point o(10,20);
    point p2=o;
    cout<<"P1 object is called and: "<<o.getX()<<endl<<o.getY()<<endl;
    cout<<"P2 object is called and: "<<p2.getX()<<endl<<p2.getY()<<endl;
    return 0;
}

