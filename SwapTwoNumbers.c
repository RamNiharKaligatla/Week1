#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=b;
	b=a;
	a=t;
	printf("Swapping them we get %d and %d",a,b);
	return 0;
}
