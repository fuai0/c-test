
#include <stdio.h>
int su(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	} 
	return 1;
}

int main()
{
	int l=0;
	scanf("%d",&l);
	if(l==1)
	printf("%d",0);
	int arr[1000]={0};
	int count=0;
	int ret=0;
	for(int i=2;i<=l;i++)
	{
		if(su(i))
		{
			
			arr[count++]=i;
			ret=ret+arr[count-1];
			if(ret<=l)
			printf("%d\n",i);
			else{
				printf("%d",count-1);
				break;
			}
		}
		
	}
	return 0;
}
