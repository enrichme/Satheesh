#include<stdio.h>
int main()
{
	int a[20],i,j,l=0,n;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==a[i])
			l++;
	}
	printf("number %d occurs %d times",n,l);
	return(0);
}
