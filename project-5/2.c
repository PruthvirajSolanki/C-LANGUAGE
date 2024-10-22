#include<stdio.h>
main() 
{
	
	 int a[10][10];
	 int i,j;
	 int row,col;
	 int n;
	 
	 printf("ENTER ARRAY'S ROW SIZE: ");
	 scanf("%d",&row);
	 printf("Enter ARRAY'S COLUMN SIZE: ");
	 scanf("%d",&col);
	 
	 printf("\nENTER ARRAY'S ELEMENTS:\n");
	 
	 for(i=0;i<row;i++) 
	 {
	 	for(j=0;j<col;j++) 
		 {
	 		printf("ENTER VALUE OF a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	 }
	 
	 n = a[0][0];
	 
	 for(i=0;i<row;i++) 
	 {
	 	for(j=0;j<col;j++) 
		 {
	 		if(n<a[i][j]) 
			{
	 			n = a[i][j];
			}
		}
	 }
	 
	 printf("\nTHE LARGEST ELEMENT IS: %d",n);
}