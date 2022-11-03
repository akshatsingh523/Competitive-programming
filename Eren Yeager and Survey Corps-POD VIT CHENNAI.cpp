#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100][100];
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    
    int x=arr[0][0]+arr[1][0]+arr[2][0];
    int count=0;
    int sum[100];
    int k=0,l=0;
    
    for(int j=1;j<10;j++)
    {
       if(x>arr[0][j]+arr[1][j]+arr[2][j])
       {
           count++;
       }
    }
  
    
    // printf("%d",count);
    
    
    
    if(count>5)
    printf("YES");
    
    else
    printf("NO");
    
    return 0;
}
          
        
