/*
num1+num2=num3
where one of num1 or num2 or num3 is replaced by an X. find the X value.

i/p:

i/p : 15+X=27

o/p : 2

1 5 + X = 2 7
0 1 2 3 4 5 6 
*/
#include <stdio.h>
int main()
{
    char str[100];
    char num1[10],num2[10],num3[10];
    int ind,itr=0,N1=0,N2=0,N3=0;
    scanf("%s",str);
    for(ind=0;str[itr]!='+';ind++)
        num1[ind] = str[itr++];
    num1[ind]='\0';
    itr++;
    for(ind=0;str[itr]!='=';ind++)
        num2[ind] = str[itr++];
    num2[ind]='\0';
    itr++;
    for(ind=0;str[itr]!='\0';ind++)
        num3[ind] = str[itr++];
    num3[ind]='\0';
    //printf("%s\n%s\n%s\n",num1,num2,num3);
    for(ind=0;num1[ind]!='\0';ind++)
    {
        N1=(N1*10)+((num1[ind])-'0');
    }
    for(ind=0;num2[ind]!='\0';ind++)
    {
        N2=(N2*10)+((num2[ind])-'0');
    }
    for(ind=0;num3[ind]!='\0';ind++)
    {
        N3=(N3*10)+((num3[ind])-'0');
    }
    //printf("N1=%d\nN2=%d\nN3=%d\n",N1,N2,N3);
    if(N1==40)
        printf("%d",N3-N2);
    else if(N2==40)
        printf("%d",N3-N1);
    else if(N3==40)
        printf("%d",N1+N2);
    return 0;
}

//123










