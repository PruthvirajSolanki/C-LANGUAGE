#include<stdio.h>
main() 
{
	
	 int i,j,n;
	 int a[10][10];
	 int transpose;
	 
	 printf("ENTER ARRAY'S ROW & COLUMN SIZE: ");
	 scanf("%d",&n);
	 
	 printf("\nENTER ARRAY'S ELEMENTS:\n");
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++) 
		{
	 		printf("ENTER VALUE a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	}
	 
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++)
		{
	 		transpose = a[i][j];
	 		a[i][j] = a[j][i];
	 		a[j][i] = transpose;
		}
	}
	 
	 printf("\n================================\n");
	 
	 printf("THE TRANSPOSE MATRIX OF AN ARRAY:\n");
	 
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++) 
		{
	 		printf("%d ",a[j][i]);
		}
		 printf("\n");
	}
}