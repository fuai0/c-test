#include <stdio.h>

int main() 
{
	int n,k;

	scanf("%d %d",&n,&k);
	int sum=n;	
	int y=0;
    do
    {
    	y=y+n;
        n=y/k;
        y=y%k;
        sum=sum+n;
	}while(y+n>=k);
	printf("%d",sum);
	return 0;
}
