#include <stdio.h>

int main() 
{
	int arr[10];
	int x=0;
	int count=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	for(int i=0;i<=9;i++)
	{
		if(arr[i]<=x+30)
		count++;
	}
	printf("%d\n",count);

	return 0;
}
