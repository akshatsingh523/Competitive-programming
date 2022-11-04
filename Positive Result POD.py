n=int(input())
a=list(map(int,input().split()))
count=0
for i in range(n):
    for j in range(n):
        if(a[i]>0 and a[j]>0 and j>i):
            count=count+1
        
        if(a[i]<0 and a[j]<0 and j>i):
            count=count+1

print(count)            

