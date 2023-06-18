#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//    int n=11;
//    int arr[11]={99,50,49,48,51,47,46,53,52,45,54};
	int count=0; 
	int w=0;
	int j=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		for(w=0;w<n;w++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i]==(arr[w]+arr[j])&&arr[w]!=arr[j])
				{
					count++;
					break;
				}
				
			}
			if(arr[i]==(arr[w]+arr[j])&&arr[w]!=arr[j])
				{
					break;
				}
		}
	}
    printf("%d",count);
	return 0;
}

