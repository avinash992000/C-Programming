#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char str[100],str1[200];
    gets(str);
    int n=strlen(str);
    //strcat(str1,str);
    //puts(str1);
    int m=n+(n/2);
    for(int i=0;i<=n;i++){
        str1[i]=str[i];
    }
    for(int i=0;i<=n;i++){
        str1[n+i]=str[i];
    }
    //puts(str1);
    for(int i=1;i<m;i++){
        for(int k=i+1;k<m;k++){printf(" ");}
        for(int j=n/2;j<=i;j++){
            printf("%c",str1[j]);
        }
        printf("\n");
    }
    
    return 0;
}
