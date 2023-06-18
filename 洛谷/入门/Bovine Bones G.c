#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int arr[a+b+c+1];
	for(int i=0;i<a+b+c+1;i++)
	{
		arr[i]=0;
	}
	for(int i=1;i<=a;i++)
	{
		for(int w=1;w<=b;w++)
		{
			for(int j=1;j<=c;j++)
			{
				arr[i+w+j]++;
			}
		}
	}
	int max=arr[0];
    for(int i=0;i<a+b+c+1;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	int i=0;
	for(i=3;i<a+b+c+1;i++)
	{
		if(max==arr[i])
		break;
	}
	printf("%d",i);
	return 0;
}

