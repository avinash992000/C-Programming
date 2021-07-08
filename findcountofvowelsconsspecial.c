#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);//scanf("%[^\n]s",str);

    int vc = 0, cc = 0, wc = 0, i = 0;
    while(str[i]!='\0')
    {
        //Jeevan Kumar
        char ch= str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')                             vc++;
        else if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))    cc++;
        else if(ch==' ')                                wc++; 
        i++;
    }
    printf("Vowel Count: %d\nCOns COunt: %d\nWords Count: %d",vc,cc,wc+1);
    return 0;
}
