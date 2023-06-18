#include <stdio.h>

int main()
{
	int n,x;
	int count=0;
	scanf("%d %d",&n,&x);	
	for(int i=1;i<=n;i++)
	{
		int w=i;
		while(w>0)
		{
			if(w%10==x)
			{
				count++;
			}
			w=w/10;
		}
	}

    printf("%d",count);
	return 0;
}

