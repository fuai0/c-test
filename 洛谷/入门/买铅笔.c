#include <stdio.h>

typedef struct 
{
	int price;
	int count;
	float sum;
	
}bi;

int main()
{
	int n=0;
	scanf("%d",&n);
	bi arr[3];
	for(int i=0;i<3;i++)
	{
		arr[i].count=0;
		arr[i].price=0;
	}
	for(int i=0;i<3;i++)
	{
		scanf("%d %d",&arr[i].count,&arr[i].price);
		if(n%arr[i].count==0)
		arr[i].sum=n/arr[i].count*arr[i].price;
		else
		arr[i].sum=(n/arr[i].count+1)*arr[i].price;
	}
	float w=arr[0].sum;
	for(int i=0;i<3;i++)
	{
		if(w>arr[i].sum)
		{
			w=arr[i].sum;
		}
	}
	printf("%d",(int)w);
	return 0;
}

