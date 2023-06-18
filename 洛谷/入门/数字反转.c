#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	char str[100];
	scanf("%s",&arr);
	int count=0;
	int sz=strlen(arr);
    if(strcmp("0",arr)==0)
    {
    	printf("0");
	}
	else
	{
		if(arr[0]=='-')
	{
		char* p=arr+1;
		for(int i=0;i<sz-1;i++)
		{
			str[i]=p[sz-i-2];
		};
	    str[sz-1]='\0';
    	count=0;
	    while(str[count]=='0')
	    {
		 count++;
	    } 
	    printf("-%s",str+count);
	}
	else
	{
		for(int i=0;i<sz;i++)
		{
			str[i]=arr[sz-i-1];
		};
	   str[sz]='\0';
    	count=0;
	   while(str[count]=='0')
	 {
		count++;
	 } 
	 printf("%s",str+count);
	}
	}
	
	
    
	return 0;
}

