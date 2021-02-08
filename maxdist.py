N=int(input())
x=list(map(int,input().split()))
y=list(map(int,input().split()))
ans=0
for i in range(N):
    for j in range(N):
        ans = max(ans,(x[i]-x[j])**2+(y[i]-y[j])**2)
print(ans)