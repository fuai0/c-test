#include <stdio.h>

int main()
{
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int arr[106][106];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		arr[i][j]=0;
	}
	int x1,y1,x,y;
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&x,&y);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(x-1==i&&(y-3<=j&&y+1>=j)) arr[i][j]=1;
				if(y-1==j&&(x-3<=i&&x+1>=i)) arr[i][j]=1;
				if((x-2<=i&&x>=i)&&(y-2<=j&&y>=j)) arr[i][j]=1;
				
			}
		}	
	}
	for(int w=0;w<k;w++)
	{
		scanf("%d %d",&x1,&y1);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((x1-3<=i&&x1+1>=i)&&(y1-3<=j&&y1+1>=j)) arr[i][j]=1;	
			}
		}	
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int w=0;w<n;w++)
		{
			if(arr[i][w]==0)
			 count++;
		}
	}
	printf("%d",count);

	return 0;
}

