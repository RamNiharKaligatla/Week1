#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapping them we get %d and %d",a,b);
	return 0;
}
