#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    char str[1000];
    scanf("%s",&str);
    int i=0,count=0,max=0,index=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
            i++;
        }
        else{
            if(max<count){
                max=count;
                index=i;
            }
            count=0;
            i++;
        }
        
    }
    int a=index-max;
    while(max>0){
        printf("%c",str[a++]);
        max--;
    }
    
    return 0;
}
