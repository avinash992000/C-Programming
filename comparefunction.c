#include<stdio.h>
int compare(int,int);
int main()
{
	int val1, val2;
	scanf("%d%d", &val1, &val2);
	int cmp = compare(val1, val2);
	if (cmp == 1) printf("Value 1 is greater");
	else if (cmp == -1) printf("Value 2 is greater");
	else printf("Both Values are equal");
	return 0;
}
//implement the function compare here
int compare(int val1,int val2){
    return val1==val2 ? 0 : val1>val2 ?1 : -1;
}
