#include<stdio.h>
int main()
{
	int n,a[10],i,j,m,k;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		k++;
		n=n/10;
	}
	for(i=0;i<k;i++)
	{
		while(m!=0)
		{
			a[i]=m%10;
			m=m/10;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]<a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%d",a[i]);
	return(0);
}
