#include<stdio.h>
//add function prototype here
int add(int var1, int var2);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d", sum);
	return 0;
}
int add(int var1, int var2)
{
	return (var1 + var2);
}
