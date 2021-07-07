#include <stdio.h>

int main()
{
	int var1, var2;
	//input var1 and var2, compare them and print result accordingly
    scanf("%d %d",&var1,&var2);
    if(var1>=var2){
        printf("Value1 is not less than Value2");}
    else{
        printf("Value1 is less than Value2");}
	
	return 0;
}
