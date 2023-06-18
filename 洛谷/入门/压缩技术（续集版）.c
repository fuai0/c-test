#include <stdio.h>
#include <string.h>
int main()
{
	char arr[201][201];
	for(int i = 0;i < 201;i++)
	{
		for(int w = 0;w < 201;w++)
		{
			arr[i][w] = '2';
		}
	}
	scanf("%s",arr[0]);
	int sz = strlen(arr[0]);
	for(int i = 1;i < sz;i++)
	{
		scanf("%s",arr[i]);
	}
	int n = sz;
	int count = 0;
	printf("%d ",n);
	for(int i = 0;i < n;i++)
	{
		for(int w = 0;w < n;w++)
		{
			count++;
			if((w != n-1 && arr[i][w] != arr[i][w+1])||(w == n-1 && arr[i+1][0] != arr[i][w]))
			{
				printf("%d ",count);
				count = 0;
			}
		}
	}
	return 0;
}

