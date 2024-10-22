#include<stdio.h>
main() 
{

	 int a[100];
	 int i,size;
	 
	 printf("ENTER ARRAY's SIZE: ");
	 scanf("%d",&size);
	 
	 printf("\nEnter array's elements:\n");
	 
	 for(i=0;i<size;i++) 
	 {
	 	printf("Enter value a[%d] = ",i);
	 	scanf("%d",&a[i]);
	 }
	 
	 printf("\n================================\n");
	 printf("\nNegative elements from an Array: ");
	 
	 for(i=0;i<size;i++) 
	 {
	 	if(a[i]<0) 
		{
	 		printf("%d ",a[i]);
		}
	 }
}