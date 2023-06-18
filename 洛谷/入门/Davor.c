#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x[100]={0};
	int k[100]={0};
	int count=0;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;(i*364+j*1092)<=n;j++)
		{
			if(n==i*364+j*1092)
			{
				x[count]=i;
			    k[count++]=j;
			}
		}
	}
	printf("%d\n%d",x[count-1],k[count-1]);
	

	return 0;
}

