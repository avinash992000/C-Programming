#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m=(n-1);
    int p=0;
    int x=1;
    while(m>p){
        if(x%2!=0){
            if(a[p]>a[m]){
            count+=a[p];
            //printf("%d\n",a[p]);
            p++;x++;
            }
            else{
                count+=a[m];
                //printf("%d\n",a[m]);
                m--;x++;
            }
        }
        else{
            if(a[p]>a[m]){
                p++;x++;}
            else{
                m--;x++;}
        }
        
    }
    printf("%d",count);
    
    return 0;
}
