#include<stdio.h>

void cube(int *arr, int size);

int main() 
{
    int n,i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("\nEnter %d elements:\n", n);
    for(i=0;i<n;i++) 
	{
        scanf("%d", &arr[i]);
    }
        printf("\nThe cubes of the elements are:\n");
    
	cube(arr, n);
}

void cube(int *arr, int size) 
{
    for(int i=0;i<size;i++) 
	{
		printf("%d\t",arr[i] *arr[i] *arr[i]);
    }
}
