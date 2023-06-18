#include <stdio.h>

int main() 
{
	int N,i;
	int count=0;
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N-1;i++)
	{
		int z;
		for(z=0;z<N-1;z++)
		{
			if(arr[z]>arr[z+1])
			{
				int temp=0;
				temp=arr[z+1];
				arr[z+1]=arr[z];
				arr[z]=temp;
				count++;
			}
		}
	}
	printf("%d",count);

	return 0;
}
