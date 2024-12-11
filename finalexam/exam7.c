#include<stdio.h>
main()
{
	int i,j;
	
	for (i=11;i<=25;i++)
	{
		for(j=11;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}