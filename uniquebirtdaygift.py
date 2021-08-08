from itertools import combinations_with_replacement
l=[]
c=0
n=int(input())
k=int(input())

if k==1:
    print(n)
else:
    for i in range(1,n+1):
        l.append(i)
    
    comb=combinations_with_replacement(l,k)

    for ar in list(comb):
        for i in range(0,k-1):  
            for j in range(k-1): 
                if ar[j+1]%ar[j]==0:
                    c=c+1

    print(c)
