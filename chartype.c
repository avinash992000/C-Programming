#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("Size of Character: %ld\n",sizeof(char));//1
    printf("Min range of char: %d\n",CHAR_MIN);//-128
    printf("Max range of char: %d\n",CHAR_MAX);//127

    char ch = 'A';//signed char ch = 'A';
    printf("Character: %c\tASCII value: %d\n",ch,ch);

    ch = 98;//-128 to 127
    printf("Character: %c\tASCII value: %d\n",ch,ch);

    ch = 128;//-128 to 127
    printf("Character: %c\tASCII value: %d\n",ch,ch);

    ch = -128;//-128 to 127
    printf("Character: %c\tASCII value: %d\n",ch,ch);

    ch = -132;//-128 to 127
    printf("Character: %c\tASCII value: %d\n",ch,ch);

    unsigned char c = 250;//0 - 255
    printf("Character: %c\tASCII value: %d",c,c); 
    return 0;
}
