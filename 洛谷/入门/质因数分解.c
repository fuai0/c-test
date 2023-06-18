#include <stdio.h>
int su(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0&&(su(i))==1)
		{
			printf("%d",n/i);
			break;
		}
	}

	return 0;
}

