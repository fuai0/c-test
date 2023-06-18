#include <stdio.h>
#include <string.h>

int main()
{
	int arr[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<2;i++)
	{
		for(int w=0;w<2;w++)
		{
			if(arr[w]>arr[w+1])
			{
				int temp=arr[w+1];
				arr[w+1]=arr[w];
				arr[w]=temp;
			}
		}
	}
	char str[4];
	scanf("%s",&str);
	printf("%d %d %d",arr[(int)(str[0]-'A')],arr[(int)(str[1]-'A')],arr[(int)(str[2]-'A')]);
	
	
	
	return 0;
}

