#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int lcs(char* text1,char* text2,int n,int m){
    if(n==0 || m==0)
        return 0;
    if(text1[n-1]==text2[m-1])
        return 1+lcs(text1,text2,n-1,m-1);
    else
        return max(lcs(text1,text2,n-1,m),lcs(text1,text2,n,m-1));
}
int max(int a,int b){
    return (a>b) ? a:b;
}

int main()
{
char X[100];
char Y[100];
gets(X);
gets(Y);
 
int m = strlen(X);
int n = strlen(Y);
 
printf("Length of LCS is %d", lcs( X, Y, m, n ) );
 
return 0;
}
