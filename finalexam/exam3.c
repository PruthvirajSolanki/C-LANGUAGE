#include<stdio.h>

void Rev(int arr[], int size) 
{
    printf("\nArray in reverse order: ");
    for (int i=size-1;i>=0;i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum(int arr[], int size) 
{
    int total = 0;
    for (int i=0;i<size;i++) 
	{
        total += arr[i];
    }
    return total;
}

int main() 
{
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    printf("\nEnter %d elements:\n", n);
    for (int i=0;i<n;i++) 
	{
        scanf("%d", &arr[i]);
    }

    Rev(arr, n);

    int totalsum = sum(arr, n);
    printf("\nThe sum of the elements in the array is: %d\n", totalsum);


}
