t=int(input())
for i in range(t):
    s1=input()
    s2=input()
    a=0
    v=[]
    for i in s1:
        a+=1
        if s2 ==i:
            v.append(a)
            a=0
    ans=0
    for k in v:
        if k%2 !=0:
            ans+=1
if ans>0:
    print("YES")
else:
    print("NO")