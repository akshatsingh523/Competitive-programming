# number of titans, amount of gas 
# 0.5 litre=1 jump
n,l=list(map(int,input().split()))
j=list(map(int,input().split()))
x=0
for i in range(n):
    x=x+j[i] #total number of litres of gas 
    
y=x*0.5

# print(x)
# print(int(y))

if(y<=l):
    print("YES")

else:
    print("NO")
    
    
    
   
