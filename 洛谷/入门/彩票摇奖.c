#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[n][7];
	int arr1[7]={0};
	scanf("%d %d %d %d %d %d %d",&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4],&arr1[5],&arr1[6]);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5],&arr[i][6]);
	}
	int arr2[7]={0};
    for(int i=0;i<n;i++)
    {
    	int count=0;
    	for(int w=0;w<7;w++)
    	{
    		for(int j=0;j<7;j++)
    		{
    			if(arr[i][w]==arr1[j])
    			{
    				count++;
				}
			}
		}
		switch(count)
		{
			case 1:arr2[6]++;
				break;
			case 2:arr2[5]++;
				break;	
			case 3:arr2[4]++;
				break;	
			case 4:arr2[3]++;
				break;
			case 5:arr2[2]++;
				break;
			case 6:arr2[1]++;
				break;
			case 7:arr2[0]++;
				break;
			case 0:
				break;				
		}
	}
	printf("%d %d %d %d %d %d %d",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4],arr2[5],arr2[6]);
	return 0;
}

