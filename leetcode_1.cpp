#include <stdio.h>

void sum(int nums[],int target,int n)
{
    for(int i=0;i<n;i++)
    {
        if(nums[i]+nums[i+1]==target)
        {
             printf("[%d,%d]",i,j);
        }
    }
   
}

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int nums[100];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int target;
    printf("enter the target: ");
    scanf("%d",&target);
    sum(nums,target,n);
    
    return 0;
}
