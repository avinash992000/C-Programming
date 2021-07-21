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

/*STDIN   Function
-----   --------
3       t = 3 (test cases)
10 2 5  n = 10, c = 2, m = 5  (first test case)
12 4 4  n = 12, c = 4, m = 4  -> 3 (second test case)
6 2 2   n = 6,  c = 2, m = 2 ->3+1+1 (third test case)*/

int main(){
        
        int t,n,c,m,e,b,d,i;
        scanf("%d",&t);
        for(i=0;i<t;i++){
            scanf("%d %d %d",&n,&c,&m);
            n=n/c;//->3
            b=n;//3
            if(n==m)
                b+=1;
            else
                while(n>m){
                    d=n/m;
                    //printf("%d\n",d);
                    e=n%m;
                    b+=d;
                    if((e+d)==m){
                        b+=1;
                        break;
                    }
                    n=n/m;
                    n+=e;
                }
                
                

            printf("%d",b);
            
        printf("\n");
        }
        
    return 0;    //5  4
}
