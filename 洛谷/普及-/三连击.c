#include <stdio.h>

int main() 
{
	int x,y,z;
	for(int x=100;x<1000;x++)
	{
		for(int y=100;y<1000;y++)
		{
			for(int z=100;z<1000;z++)
			{
				if((2*x==y&&z==3*x)&&((x%10)*(x/10%10)*(x/100)*(y%10)*(y/10%10)*(y/100)*(z%10)*(z/10%10)*(z/100)==1*2*3*4*5*6*7*8*9&&(x%10)+(x/10%10)+(x/100)+(y%10)+(y/10%10)+(y/100)+(z%10)+(z/10%10)+(z/100)==1+2+3+4+5+6+7+8+9))
				{
					printf("%d %d %d\n",x,y,z);
				}
			}
		}
	}

	return 0;
}
