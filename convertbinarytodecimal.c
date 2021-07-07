#include<stdio.h>
#include<math.h>

int binaryToDecimal(long);

int binaryToDecimal(long n)
{
    //n = 1101
    int result = 0, i = 0, rem;
    while(n!=0)//1101 != 0, 110 != 0, 11 != 0, 1 != 0, 0!=0[False]
    {
        rem = n%10;//110/%10=>1, 110%10=>0, 11%10=>1, 1%10=>1
        if(rem == 1)
            result = result + pow(2,i);//0+pow(2,0)[1]=> 0+1=1 + pow(2,2) => 1+4=5+pow(2,3)=5+8=13
        i++;//1,2,3,4
        n = n/10;//1101/10=110, 110/10=11, 11/10=1, 1/10=0
    }
    return result;
}

int main()
{
    long binaryNumber;
    printf("Enter binary value: ");
    scanf("%ld",&binaryNumber);
    printf("Decimal equivalent value of %ld is: %d",binaryNumber, binaryToDecimal(binaryNumber));
    return 0;
}
