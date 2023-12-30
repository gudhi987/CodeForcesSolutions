import math
def func():
    n=int(input())
    lst=[]
    # for i in range(n):
    #     lst.append(int(input()))
    lst=list(map(int,input().split()))
    ans=0
    for i in range(1,n):
        if lst[i]<lst[i-1]:
            count=math.ceil(math.log2(lst[i-1]/lst[i]))
            ans+=count
            lst[i]*=(2**count)
    print(ans)
    pass
t=int(input())
for i in range(t):
    func()