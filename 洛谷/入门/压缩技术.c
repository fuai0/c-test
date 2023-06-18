#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int arr[n*n];
	int sum = 0;
	int i=0;
	int temp = 0;
	while(sum < n*n)
	{
		int x = 0;
		scanf("%d",&x);
		if(i%2 == 0)
		{
			for(int w = 0;w < x;w++)
			{
				arr[temp] = 0;
				temp++;
			}
			
		}
		else
		{
			for(int w = 0;w < x;w++)
			{
				arr[temp] = 1;
				temp++;
			}
			
		}
		
		i++;
		sum = sum + x;
	}
	int y=0;
	for(int j = 0;j < n;j++)
	{
		for(int w = 0;w < n;w++)
		{
			printf("%d",arr[y++]);
		}
		printf("\n");
	}

	return 0;
}

