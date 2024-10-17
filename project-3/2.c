#include<stdio.h>

int main()
{
	int number,count=0;
	
	printf("ENTER ANY NUMBER :");
	scanf("%d",&number);
	
	if(number==0)
	{
		count=1;
	}
	else
	{
		while(number!=0)
		{
			number/=10;
			count++;
		}
	}
    printf("TOTAL NUMBER OF DIGITS:%d\n",count);
}