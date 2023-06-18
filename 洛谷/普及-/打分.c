#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	float max=arr[0];
	float min=arr[0];
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	float s=(sum-max-min)/(n-2);
	printf("%0.2f",s);

	return 0;
}

