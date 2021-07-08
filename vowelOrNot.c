//Problem statement: Vowel or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': printf("Vowel"); break;
        default: printf("Not a vowel"); break;
    }
}
