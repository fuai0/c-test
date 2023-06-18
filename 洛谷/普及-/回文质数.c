#include <stdio.h>
int su(long long x)
{
	for(long long i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	} 
	return 1;
}
int hui(long long x)
{
	int arr[9];
	int count=0;
	while(x>0)
	{
		arr[count++]=x%10;
		x=x/10;
	}
	for(int i=0;i<count/2;i++)
	{
		if(arr[i]!=arr[count-1-i])
		return 0;
	}
	return 1;
}
int shu(long long x)
{
	int count=0;
	while(x>0)
	{
		x=x/10;
		count++;
	}
	return count;
}

int main()
{
	long long a,b;
	scanf("%d %d",&a,&b);
	if(a%2==0)
	{
      for(long long i=a+1;i<=b;i=i+2)
	{
		if(su(i)==1&&hui(i)==1)
		{
			printf("%d\n",i);
		}
	}
	}
	else
	{
	for(long long i=a;i<=b;i=i+2)
	 {
		if(su(i)==1&&hui(i)==1)
		{
			printf("%d\n",i);
		}
 	}	
	}


	return 0;
}

