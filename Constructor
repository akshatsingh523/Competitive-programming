#include <iostream>
using namespace std;

class integer
{
    int m,n;
    public:
    integer(int,int);//parametrized constructor called
    void display(void)
    {
        cout<<"m= "<<m<<"\n";
        cout<<"n= "<<n<<"\n";
    }
    
};

integer::integer(int x,int y)
{
    m=x;
    n=y;
}


int main ()
{
    integer int1(0,100);//implicit constructor called
    integer int2=integer(25,75);//explicit constructor called
    printf("\nObject1 display\n");
    int1.display();
    printf("\nObject2 display\n");
    int2.display();
}
