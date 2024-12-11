#include<stdio.h>

int sum(int arr[], int size);

int main() 
{
    int n,i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    int total = sum(arr, n);
    printf("The sum of the elements in the array is: %d\n", total);
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

