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
    
    char ch[100005];
    scanf("%s",ch);
    int a[26]={0};
    for(int i=0;ch[i];i++){
        a[ch[i]-97]++;
    }
    int x=0,y=0,nx=0,ny=0;
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            if(x==0){x=a[i];nx++;}
            else if(x==a[i])nx++;
            else if(y==0){y=a[i];ny++;}
            else if(y==a[i])ny++;
            else {printf("NO");return 0;}
        }
    }
    if(y==0)printf("YES");
    else if(x>y){
        if(y==1 && ny==1)printf("YES");
        else if(nx==1 && x-y==1)printf("YES");
        else printf("NO");
    }
    else{
        if(x==1 && nx==1)printf("YES");
        else if(ny==1 && y-x==1)printf("YES");
        else printf("NO");
    }
    return 0;
}

 //---------------------------------------------------------------------OR----------------------------------------------------------------------<<
// few test cases are not been passed by the below code
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
    
    char str[100];
    int count,i,j,x=0,y,m=0;
    gets(str);
    int n=strlen(str);
    int arr[n];
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>=0 && count<100){
            arr[i]=count;
            if(x<arr[i]){
                y=x;
                x=arr[i];
            }
            m++;
        }
        //printf("%d",count);
    }
    //printf("%d\n",x);
    //printf("%d",y);
    count=0;
    int count1=0;
    for(i=0;i<m;i++){
        if(x==arr[i])
          count++;
        if(y==arr[i])
            count1++;
    }
    //printf("%d\n",count);
    //printf("%d",count1);
    if(count>=count1 && count1<=1 && (y-1)==x){
        printf("YES");
        return 0;  
    }
    else if(count==0 || count1==0 || count==count1){
        printf("YES");
        return 0;
    }
    else if(count1>=count && count<=1 && (x-1)==y){
        printf("YES");
        return 0;  
        }
    printf("NO");
    //printf("\n%d",count1);
    return 0;
}
