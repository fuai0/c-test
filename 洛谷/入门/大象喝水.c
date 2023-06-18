#include <stdio.h>

int main()
{
	int h,r;
	scanf("%d %d",&h,&r);
	int m=20000;
	float v=3.14*r*r*h;
	int t=0;
	if(m/v==m/v*v)
	{
		t=m/v;
	}
	else
	{
		t=m/v+1;
	}
	printf("%d",t);

	return 0;
}

