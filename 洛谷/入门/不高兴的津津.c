#include <stdio.h>
#define max 7
typedef struct 
{
	int xingqi;
	int h;
}day;

int main()
{
	day arr[7];
	for(int i=0;i<7;i++)
	{
		arr[i].xingqi=i+1;
		arr[i].h=0;
	}
	int h1=0;
	int h2=0;
	for(int i=0;i<7;i++)
	{
		scanf("%d %d",&h1,&h2);
		arr[i].h=h1+h2;
	}
	int x=0;
	int y=0;
	for(int i=1;i<7;i++)
	{
		if(y<arr[i].h)
		{
			y=arr[i].h;
			x=arr[i].xingqi;
		}
		
	}
    if(y<=8)
    {
    	printf("0");
	}
	else
	{
		printf("%d",x);
	}
	return 0;
}

