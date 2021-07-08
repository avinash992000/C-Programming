#include<stdio.h>
int main()
{
    char ch = 'A';//1Byte
    short s = 852;//2Bytes
    int i = 32768;//4Bytes
    printf("%d ",i);
    s = i;//INteger type -> short type [highiest rank to lowest rank]
    /*
        Short range: -32768 to 32767
        -32768, -32767, -32766,......,0,......,32765,32766,32767
        Note: While storing highiest rank data type value into lowest rank data type, there may ba chance of losing the data.[Reason: If data is not within the range]
    */
    printf("%hd ",s);//-3276
    printf("Size is: %ld",sizeof(ch+s+i));

    float f = 987.65;
    i = (int)f;// i = f;
    printf("\n\n%f %d",f,i);
    return 0;
}
