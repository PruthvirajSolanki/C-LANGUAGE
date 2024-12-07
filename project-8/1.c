#include<stdio.h>
#include<string.h>

int main() 
{

    char a[10], * ptr;
    int count;

    printf("ENTER ANY STRING: ");
    gets(a);
    ptr = &a;
    count = 0;
    
    while (*ptr!='\0')
	{
        count++;
        ptr++;
    }

    printf("\nTHE LENGTH OF A STRING: %d", count);

}