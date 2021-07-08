/*
    Problem Statement: Read and Print a string
    Procedure:
        => To read input as string:
            1. Using scanf: Whenever first white space occurs the compiler will place string data before whitespace into string variable, Remaining will be keeps into buffer.
                Eg: int x,y,z => 10 20 30
                => %s: Format specifier for string
                => Scanset data: What are the input you want to read / what not to read[Termination]
                    -> Accepted values will be placed in between []
                    ^ -> Charet means, this data should not be read [Ternimation]
            2. Using gets:
                => New line is carriage return for gets function
                => Not standardized
        => To print output as string
            1. Using printf
            2. Using puts
*/
#include<stdio.h>
int main()
{
    char name[100],name2[100],ch;
    printf("Enter your name: ");
    scanf("%[^\n]s",name);//&name: Both will point to the same location
    scanf("%c",&ch);
    gets(name2);
    printf("Name is: %s\nName:%s",name,name2);
    puts(name);
    puts(name2);
    return 0;
}
