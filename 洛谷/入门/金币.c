#include <stdio.h>

int main()
{
	int k=0;
	scanf("%d",&k);
	int count=1;
	int x=0;
	while(k>x)
	{
		x=x+count;
		count++;
	}
	int sum=0;
    for(int i=1;i<=count-2;i++)
    {
    	sum=sum+i*i;
	}
	int q=sum+(k-x+count-1)*(count-1);
	printf("%d",q);
	return 0;
}

