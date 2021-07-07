#include <stdio.h>

int main()
{
	int var1, var2;
	//Input var1 and var2
    scanf("%d",&var1);
    scanf("%d",&var2);
    
	

	
	//Replace the _ with appropriate conditions
	if (var1%var2==0 || var2%var1==0) printf("YES");
	else  printf("NO");
	return 0;
}
