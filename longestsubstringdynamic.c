#include<stdio.h> 
#include<string.h> 
int main() 
{
    char str1[10000],str2[10000]; 
    scanf("%s",str1); 
    scanf("%s",str2); 
    int len1,len2; 
    len1=strlen(str1); //len1=4
    len2=strlen(str2); //len2=4 
    int mat[len1+1][len2+1];  //mat[5][5] 
    int row,col; 
    for(row=0;row<=len1;row++) //row=0 ; 0<=4 
    {
       for(col=0;col<=len2;col++) 
       {
           if(row==0 || col==0 )
           {
               mat[row][col]=0;
           }
           else if(str1[row-1]==str2[col-1])
           {
               mat[row][col]=mat[row-1][col-1]+1;
           }
           else 
           {
               mat[row][col]=0;
           }
       }
    }
    int max=-1;
    for(row=1;row<=len1;row++)
    {
        for(col=1;col<=len2;col++)
        {
          if(max<mat[row][col])
          {
              max=mat[row][col];
          }
        }
        
        
    }
    printf("Length of the longest common substring %d",max);
}
