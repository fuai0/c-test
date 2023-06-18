#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int e=c-a;
	int f=d-b;
	if(f<0)
	{
		e--;
		f=f+60;
	}
    printf("%d %d",e,f);
	return 0;
}

