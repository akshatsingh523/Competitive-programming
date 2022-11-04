#include <iostream>

using namespace std;

int main()
{
    int n;
    int count=0;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
          if(a[i]*a[j]>0 && i<j)
          {
              count++;
          }
        }
    }
    printf("%d",count);
    return 0;
}
