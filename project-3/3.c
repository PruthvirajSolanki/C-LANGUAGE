#include<stdio.h>

main()
{
	int num,first,last,sum;
	
	printf("ENTER THE VALUE OF ANY NUMBER = :");
	scanf("%d",&num);
	
	last = num % 10;
	
	while(num>=10)
	{
		num=num/10;
	}
	first =num;
	
	sum = last + first;
	
	printf("\n\n");
	printf("SUM OF FIRST AND LAST DIGIT = %d",sum);
}