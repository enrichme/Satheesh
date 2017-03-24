#include <stdio.h>
 
int main(void) 
{
	int i,j=0,n=1;
	int a[10][10];
	for(i=0;i<4;i++)
	{
		while(j<4)
		{
			a[i][j]=n;
			n++;
			if((i%2==0))
			{
				if(j==3)
				{
					break;
				}
				else
				{
					j++;
				}
			}
			else
			{
				if(j==0)
				{
					break;
				}
				else
				{
					j--;
				}
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
