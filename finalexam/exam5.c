#include<stdio.h>

struct book 
{
    int book_num;
    char book_title[20];
    char book_author[20];
    int book_price;
};

int main() 
{
    int i,n;

    printf("Enter the number of books => ");
    scanf("%d", &n);

    struct book b1[n];

    for (i=0;i<n;i++) 
	{
    	printf("\nEnter details for books => %d\n", i + 1);
    	printf("titlename => ");
    	scanf(" %[^\n]", &b1[i].book_title);
    	printf("bookauthor => ");
    	scanf("%s", &b1[i].book_author);
    	fflush(stdin);
    	printf("bookprice => ");
    	scanf("%d", &b1[i].book_price);
	}


    printf("\n book price \n\n");
    for (i=0;i<n;i++) 
	{
        printf("booktitle => %s\n",b1[i].book_title);
        printf("bookauthor => %s\n",b1[i].book_author);
        printf("bookprice => %d\n",b1[i].book_price);
        
	    printf("\n\n");
    }
}