
#include <stdio.h>

int main() 
{
	int l,m;
	scanf("%d %d",&l,&m);
	int u[m];
	int v[m];
	int s=l+1;
	int arr[s];
	for(int i=0;i<s;i++) arr[i]=1;
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&u[i],&v[i]);
		for(int j=u[i];j<=v[i];j++)
		arr[j]=0;		
	}
	int count=0;
	for(int w=0;w<s;w++)
	{
		if(arr[w]==1)
		{
			count++;
		}
	}
    printf("%d",count);
	return 0;
}
