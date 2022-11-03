#include <stdio.h>

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d",a[i]); 
    }
}

void countsort(int a[],int n)
{
    int max=maximum(a,n);
    int* count=(int* )malloc((max+1)*sizeof(int));
    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    int i=0,j=0;
    
    while(i<= max){
        if(count[i]>0){
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    } 
}


int maximum(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           max=arr[i];
       }
    }
    return max;
}

int main()
{
    int a[100],n;
    countsort(a,n);
    printarray(a,n);
    return 0;
}
