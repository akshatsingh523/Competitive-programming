#include <stdio.h>

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
}

void insertionsort(int a[],int n)
{
    int key;
    for(int i=0;i<n;i++)
    {
        key=a[i];
        int j=i-1;
        while(j>=0 && key>a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    
}


void selectionsort(int a[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        min=a[i+1];
    }
    
}

void bubblesort(int a[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //bubblesort(a,n);
    //selectionsort(a,n);
    //insertionsort(a,n);
    quicksort(a,n);
    printarray(a,n);

    return 0;
}
