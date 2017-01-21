#include <stdio.h>
int main(void) 
{
	int a[10][10],i,j,k;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			a[i][j]=1;
			if((j!=i)&&(j!=0))
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
