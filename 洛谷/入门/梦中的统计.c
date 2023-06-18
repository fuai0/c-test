#include <stdio.h>
#include <stdlib.h>
#define max 10
void qiu(int x,int *p)
{
	while(x>0)
	{
		int ret=x%10;
		p[ret]++;
		x=x/10;
	}
}
int main()
{
	int m,n;
	int* p=(int*)malloc(sizeof(int)*max);
	for(int i=0;i<10;i++)
	{
		p[i]=0;
	}
	scanf("%d %d",&m,&n);
	int num=n-m+1;
	for(int i=m;i<=n;i++)
	{
		qiu(i,p);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",p[i]);
	}
    free(p);
    p=NULL;
	return 0;
}

