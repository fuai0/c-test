#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<(b+c)&&(b<(a+c)&&c<(a+b)))
	{	
	    if((a*a==(b*b+c*c)||b*b==(a*a+c*c))||c*c==(a*a+b*b))
	{
		printf("Right triangle\n");
		
	    if((a==b)||(b==c||a==c))
		printf("Isosceles triangle\n");
	}
	else if((a*a<(b*b+c*c)&&b*b<(a*a+c*c))&&c*c<(a*a+b*b))
	{
		printf("Acute triangle\n");
		if((a==b)||(b==c||a==c))
		{
			printf("Isosceles triangle\n");
			if(b==c&&a==c) 
			printf("Equilateral triangle\n");
			
		}
	}
	
		else if((a*a>(b*b+c*c)||b*b>(a*a+c*c))||c*c>(a*a+b*b))
	{
		printf("Obtuse triangle\n");
		if((a==b)||(b==c||a==c))
		{
		    printf("Isosceles triangle\n");
		}
	}
    
    	
	}
	else
	{
			printf("Not triangle\n");
	}
	

	return 0;
}

