#include <stdio.h>

int main()
{
	int arr[12]={0};
	for(int i=0;i<12;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a=300;
	int b=0;
	int i=0;

	for(i=0;i<12;i++)
	{
		if(a>=arr[i])
		{	
		    int temp=a;
		    a=(a-arr[i])%100+300;
		    b=b+(temp-arr[i])/100*100;
		}
		else
		{
			printf("-%d",i+1);
			break;
		}
		
	}
	if(i==12)
	{
		printf("%d",b*6/5+a%100);
	}
	

	return 0;
}

