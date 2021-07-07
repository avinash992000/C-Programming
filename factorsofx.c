#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,i;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        for(i=1;i<=b;++i){
        if(b%i == 0){
            printf("%d ",i);
        }
    }
        --a;
        printf("\n");
    }
    
        
    return 0;
}
