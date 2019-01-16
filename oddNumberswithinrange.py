n,s=map(int,input().split())
a=[]
for i in range(n+1,s):
    if(i%2==1):
        a.append(i)
print(*a)
