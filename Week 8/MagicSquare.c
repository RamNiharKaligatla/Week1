#include <stdio.h>

int main()
{
	int i, j, d, n;
	
	printf("No. of rows: ");
	scanf("%d", &n);
	
	int a[n][n];
	
	int f[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			f[i][j] == 0;
		}
	}
	
	i = n / 2;
	j = n - 1;
	
	for(d=1; d<=n*n; d++)
	{
		if(f[i][j] == 0)
		{	
			a[i][j] = d;
			f[i][j]++;
		}
		else
		{
			i += 1;
			j -= 2;
			a[i][j] = d;
			f[i][j]++;
		}
		
		i -= 1;
		j += 1;
		if(i < 0)
		{
			i += n;
		}
		if(j < 0)
		{
			j += n;
		}
		if(i >= n)
		{
			i -= n;
		}
		if(j >= n)
		{
			j -= n;
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
