// You are using GCC
#include<stdio.h>
int main()
{
int i ,up=0,l=0,d=0,ch=0,count=0;
char str[100];

gets(str);
i=-1;
while(str[++i]){
    count++;
    if(str[i]>=48 && str[i]<=57){
        d++;
    }
    else if(str[i]>=65 && str[i]<=90){
        up++;
    }
    else if(str[i]>=97 && str[i]<=122){
        l++;
    }
    else ch++;
}
float a,b,c,e,f=count;
a=up/f*100;
b=l/f*100;
c=d/f*100;
e=ch/f*100;
printf("In '%s' :\n",str);
//puts(str);
printf("Uppercase letters are %.2f%%\n",a);
printf("Lowercase letters are %.2f%%\n",b);
printf("Digits Are %.2f%%\n",c);
printf("Other Characters Are %.2f%%\n",e);
for(i=0;i<29;i++){
    printf("-");
}
return 0;
}
/* 48-57=digits
65-90=capitalleter
97-122=samll lett*/
