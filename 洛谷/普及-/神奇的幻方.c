#include <stdio.h>
#define max 39*39
typedef struct ju
{
	int hang;
	int lie;
}ju;
typedef struct l
{
	ju data[max];
	int lenth;
}l;

int kong(int x,int y,l p)
{
	for(int i=0;i<p.lenth;i++)
	{
		if(p.data[i].lie==x&&p.data[i].hang==y)
		{
			return 1;
		}
	}
	return 0;
}
int zhao(int x,int y,l p)
{
	for(int i=0;i<p.lenth;i++)
	{
		if(p.data[i].lie==x&&p.data[i].hang==y)
		{
			return i;
		}
	}
}

int main()
{
	int n=0;
	scanf("%d",&n);
    l q;
    q.lenth=0;
    for(int i=1;i<=n*n;i++)
    {
    	q.data[i].hang=0;
    	q.data[i].lie=0;
	}
	q.data[0].hang=n/2;
	q.data[0].lie=0;
	q.lenth++;
	for(int i=1;i<n*n;i++)
	{
		if(q.data[i-1].lie==0&&q.data[i-1].hang!=n-1)
		{
			q.data[i].lie=n-1;
			q.data[i].hang=q.data[i-1].hang+1;
			q.lenth++;
		}
		else if(q.data[i-1].lie!=0&&q.data[i-1].hang==n-1)
		{	
			q.data[i].lie=q.data[i-1].lie-1;
			q.data[i].hang=0;
			q.lenth++;
		}
		else if(q.data[i-1].lie==0&&q.data[i-1].hang==n-1)
		{
			q.data[i].lie=q.data[i-1].lie+1;
			q.data[i].hang=q.data[i-1].hang;
			q.lenth++;
		}
		else if((q.data[i-1].lie!=0&&q.data[i-1].hang!=n-1)&&kong(q.data[i-1].lie-1,q.data[i-1].hang+1,q)==0)
		{
			q.data[i].lie=q.data[i-1].lie-1;
			q.data[i].hang=q.data[i-1].hang+1;
			q.lenth++;
		}
		else if((q.data[i-1].lie!=0&&q.data[i-1].hang!=n-1)&&kong(q.data[i-1].lie-1,q.data[i-1].hang+1,q)==1)
		{
			q.data[i].lie=q.data[i-1].lie+1;
			q.data[i].hang=q.data[i-1].hang;
			q.lenth++;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int ret=zhao(i,j,q);
			
			printf("%d ",ret+1);
		}
		printf("\n");
	}

	return 0;
}

