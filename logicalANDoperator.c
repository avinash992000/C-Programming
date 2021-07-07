#include <stdio.h>

int main()
{
	int var;
    scanf("%d",&var);
    (var%2==0 && var%3==0) ? printf("YES") : printf("NO");

	return 0;
}
