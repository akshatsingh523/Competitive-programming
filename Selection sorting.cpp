#include <stdio.h>

void printarray(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
      printf("%d",arr[i]);
  }
  printf("\n");
    
}

void selectionsort(int *arr,int n)
{
    int i=1,j;
    j=i-1;
    int pt=arr[i];
    if (arr[j]>arr[i])
    {
        int temp;
        for(i=1;i<n;i++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
    }
    
    
}

int main()
{
    int arr[100]={8,5,9,4,6};
    int n=5;
    
    printarray(arr,6);
    selectionsort(arr,6);
    printarray(arr,6);
    
    
    
    
    return 0;
}

