#include <stdio.h>

int main()
{
    int arr[100],n;
    int even[100],odd[100];
    printf("enter the length of the array: ");
    
    scanf("%d",&n);
    
    printf("enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count1=0;
    int count2=0;
    
    int j=0;
    int k=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
            count1++;
        }
        
        if(arr[i]%2!=0)
        {
            odd[k]=arr[i];
            k++;
            count2++;
        }
    }
    printf("%d %d",count1,count2);
     for(int i=0;i<count1;i++)
     {
         printf("%d ",even[i]);
     }
    
     for(int j=0;j<count2;j++)
     {
         printf("%d ",odd[j]);
     }
}
