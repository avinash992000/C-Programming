#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],h[6]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        h[a[i]]++;
    }
    int maxind=1;
    for(int i=2;i<=5;i++)
    {
        if(h[maxind]<h[i])
            maxind=i;
    }
    printf("%d",maxind);
}

//above code compiles with less time
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n,count=0,j,temp;
    scanf("%d",&n);
    int i,a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=0;
    }
    int max=b[0],c;
    for(i=0;i<(n/2);i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
               count++; 
            }
        }
        b[i]=count+1;
        if(b[i]>max){
            temp=max;
            max=b[i];
            b[i]=temp;
            c=i;
        }
    }
    printf("%d",a[c]);
    
    return 0;
}

//it was in python
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

n=int(input())
    #int i,a[n],b[n];
a=[]
b=[]
a = input().split() 
a = [int(x) for x in a] 

for i in range (0,n):
    
    #a.insert(i,int(input()))
    b.append(0)
max=b[0]
for i in range (0,n):
    count=0
    for j in range (0,n):
        if(a[i]==a[j]):
             count=count+1
        
    
    b[i]=count+1
    if(b[i]>max):
        temp=max
        max=b[i]
        b[i]=temp
        c=i
    

print(a[c])
