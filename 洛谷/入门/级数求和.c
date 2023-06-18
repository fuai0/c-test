#include <stdio.h>

int main() 
{
	int k=0;
	scanf("%d",&k);
	double w=1;
	int count=1;
	while(w<=k)
	{
	count++;
		w=w+1.0/count;
		   
	}
    printf("%d",count);
	return 0;
}
