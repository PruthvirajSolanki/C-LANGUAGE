#include<stdio.h>
main()
{
	int i,j,n=11;
	
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
}