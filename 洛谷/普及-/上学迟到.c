#include <stdio.h>

int main()
{
	int s,v;
	scanf("%d %d",&s,&v);
	int t=0;
	if(s%v==0) t=s/v;	
	else t=s/v+1;
	t=t+10;
	int h=7-t/60;
	int min=60-t%60;
	if(h<0)
	{
		h=h+24;
	}
	if(h<10)
	{
		if(min<10)
		printf("0%d:0%d",h,min);
		else
		printf("0%d:%d",h,min);
	}
	else if(h>=10)
	{
		if(min<10)
		printf("%d:0%d",h,min);
		else
		printf("%d:%d",h,min);
	}
	
	return 0;
}

