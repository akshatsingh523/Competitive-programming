#include <stdio.h>

//7,12,54,65,23,9

void insertion_sort(int *a,int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            
        }
        a[j+1]=key;
    }
}

void printarray(int* a,int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    

int main ()
{
    int a[]={12,54,65,7,23,9};
    int n=6;
    printarray(a,6);
    insertion_sort(a,n);
    printarray(a,6);
 
    
    return 0;
}

