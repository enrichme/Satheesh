#include<stdio.h>
int main()
{
	int a[10][10],i,j,k,t,l,n;
	printf("Magic square of order 5:\n");
	n=5;
	k=0;
	l=n/2;
	t=1;
	for(i=0;i<n;i++)
	{
		int r;
		for(j=0;j<n;j++)
		{
			a[k][(j+l)%n]=t;
			t++;
			k=(k+n-1)%n;
			r=(j+l)%n;
		}
		k=(k+n+2)%n;
		l=r;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return(0);
}
		
