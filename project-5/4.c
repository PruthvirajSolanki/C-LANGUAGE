#include<stdio.h>

main()
{
	int row,col;
	
	printf("ENTER THE ROW :");
	scanf("%d",&row);
	printf("ENTER THE COLUMN :");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("ENTER a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	int r,r_sum=0;
	
	printf("\n\nENTER ROW NUMBER :");
	scanf("%d",&r);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(r==i)
			{
				printf("%d ",a[i][j]);
				r_sum += a[i][j];
			}	
		}
	}
	printf("\nTHE SUM OF ROW :%d",r_sum);
	
	int c,c_sum=0;
		
	printf("\n\nENTER COLUMN NUMBER :");
	scanf("%d",&c);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(c==j)
			{
				printf("%d ",a[i][j]);
				c_sum += a[i][j];
			}	
		}
	}
	printf("\nTHE SUM OF COlUMN :%d",c_sum);
}