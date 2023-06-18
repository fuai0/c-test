#include <stdio.h>
#include <string.h>
int main()
{
	char str[14];
	scanf("%s",str);
	char str1[11];
	int count=0;
	for(int i=0;i<14;i++)
	{
		if(str[i]!='-')
		{
			str1[count]=str[i];
			count++;
		}
		
	}
	int arr[10]={0};
	for(int i=0;i<10;i++)
	{
		arr[i]=(int)(str1[i]-'0');
	}
	int sum=0;
	for(int i=0;i<9;i++)
	{
		sum=sum+arr[i]*(i+1);
	}
	if(sum%11==arr[9]||(str[12]=='X'&&sum%11==10))
        printf("Right");
	else
	{
		int w=sum%11;
		if(w==10)
		str[12]='X';
		else str[12]='0'+w;
		printf("%s",str);
	}
	return 0;
}

