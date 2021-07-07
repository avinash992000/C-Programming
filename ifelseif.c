#include <stdio.h>

int main()
{
	int var1, var2;
    scanf("%d %d",&var1,&var2);
    if(var1>var2){
        printf("value1 is greater");}
    else if(var1==var2){
        printf("both values are equal");}
    else{
        printf("value2 is greater");}
    
	return 0;
}
