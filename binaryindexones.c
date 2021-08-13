
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
   int n,i=0,c=0,x=1;
    scanf("%d",&n);
    int a[64];
    while(n>0){
        a[i]= n%2;
        //printf("%d",a[i]);
        c+=a[i];
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
        if(a[j]==1)
            printf("%d",x);
        x++;
    }
    printf("%d",c);
    return 0;
}
