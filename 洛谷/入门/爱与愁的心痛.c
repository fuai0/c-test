#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum[n-m+1];
	for(int i=0;i<n-m+1;i++)
	{
		sum[i]=0;
	}
	for(int i=0;i<n-m+1;i++)
	{
		for(int w=0;w<m;w++)
		{
			sum[i]=sum[i]+arr[i+w];
		}
	}
	int min=sum[0];
	for(int i=1;i<n-m+1;i++)
	{
		if(min>sum[i])
		{
			min=sum[i];
		}
	}
	printf("%d",min);
	return 0;
}

