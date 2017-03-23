#include <stdio.h>
int main(void) 
{
	int i,j,en=0;
	int a[6]={2,4,6,8,22,12};
	int e[6];
	for(i=0;i<6;i++)
	{
		if(a[i]%2==0)
		{
			e[en]=a[i];
			en++;
		}
	}
	for(i=0;i<en;i++)
	{
		for(j=i+1;j<en;j++)
		{
			if(e[i]>e[j])
			{
				int t;
				t=e[i];
				e[i]=e[j];
				e[j]=t;
			}
		}
	}
	printf("\n%d",e[en-2]);	
	return 0;
}
