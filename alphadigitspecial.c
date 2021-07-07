/*
    Problem Statement: Identify the given character is Alphabet, digit, special Symbol
    Solution:
        -> Alphabet: 
            -> Every character is having ASCII value
            -> ASCII of Aplphabets:
                Upper Case: 65 to 90
                Lower Case: 97 to 122
                I. (inputCharacter >= 65 && inputCharacter<=90) || (inputCharacter >= 97 && inputCharacter<=122)
                II. (inputCharacter >= 'A' && inputCharacter<='Z') || (inputCharacter >= 'a' && inputCharacter<='z')
        -> DIgit:
            -> ASCII of digits:
                0 to 9: 48 to 57
                I. (inputCharacter >= 48 && inputCharacter<=57)
                II. (inputCharacter >= '0' && inputCharacter<='9')
*/
#include<stdio.h>
int main()
{
    /*int i;
    for(i=0;i<=255;i++)
        printf("Character: %c\tASCII Value: %d\n",i,i);*/
    
    char ch;
    printf("Enter a charcter: ");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))   printf("%c is an Alphabet",ch);
    else if(ch>=48 && ch<=57)                       printf("%c is a digit",ch);
    else                                            printf("%c is a special symbol",ch);
    return 0;
}
