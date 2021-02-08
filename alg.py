N,X=map(int,input().split());a=sorted(list(map(int, input().split())))
c,t=0,0
while c<N and t+a[c]<=X:t+=a[c];c+=1
print(c)