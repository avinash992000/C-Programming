#include <stdio.h>

int main()
{
	int var, input_count = 0;
	//write your code here
    while(input_count<5){
        scanf("%d",&var);
        if(var%2==0){
            printf("even\n");}
        else{
            printf("odd\n");}
        input_count++;
    }
    
	return 0;
}
