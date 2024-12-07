#include<stdio.h>

void pruthh() 
{
	
	int a[5][5];
	int (*ptr)[5];
	int n; 
	
	printf("ENTER ARRAY's SIZE: ");
	scanf("%d", &n);
	
	ptr = a;
	
	printf("\nENTER ARRAY ELEMENTS:\n");	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("ENTER VALUE OF A[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nCUBES OF ALL ELEMENTS:\n");

	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<n; j++) 
		{
			printf("%d ", ptr[i][j] * ptr[i][j] * ptr[i][j]);
		}
		printf("\n");
	}
}

int main() 
{
	pruthh();
}