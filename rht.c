#include <stdio.h>
int main(void)
{
 	int i,j,k=1;
	printf("%d\n",k);
	for(i=1;i<6;i++)
	{
		printf("1\t");
		for(j=1;j<k;j++)
		{
			printf("%d\t",k+1);
		}
		printf("1\n");
		k++;
	}	
	return 0;
}
