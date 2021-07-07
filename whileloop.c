#include<stdio.h>
int main()
{
	int var, sum = 0, input_count = 0;
	while (input_count<5)//complete the condition so that you only take  5 numbers as input.
	{
		scanf("%d", &var);
		sum += var;
		input_count ++;
	}
	printf("%d", sum);
	return 0;
}
