#include<stdio.h>

void cal() 
{
	
	int p,a,b;
	 
	do 
	{
	 	printf("1. ADDITION\n");
	 	printf("2. SUBTRACTION\n");
	 	printf("3. MULTIPLICATION\n");
	 	printf("4. DIVISION\n");
	 	printf("5. PERCENTAGE\n");
	 	printf("0. EXIT\n");
	 	
	 	printf("ENTER YOUR CHOICE: ");
	 	scanf("%d",&p);
	 	
	 	if(p>=1 && p<=5) 
		{
	 		printf("ENTER THE FIRST NUMBER: ");
	 		scanf("%d",&a);
	 		printf("ENTER THE SECOND NUMBER: ");
	 		scanf("%d",&b);
	 		
	 		switch(p) 
			{
	 			case 1:
	 				printf("ADDITION IS: %d\n",a+b);
	 				break;
	 			case 2:
	 				printf("SUBTRACTION IS: %d\n",a-b);
	 				break;
				case 3:
	 				printf("MULTIPLICATION IS: %d\n",a*b);
	 				break;
				case 4:
	 				printf("DIVISION IS: %d\n",a/b);
	 				break;
	 			case 5:
	 				printf("PERCENTAGE IS: %d\n",a%b);
	 				break;	
			}
		}
		else
		{
		 	printf("ENTER VALID NUMBER.\n");
		}
	}
	while(p!=5);
}

main() 
{
	
	cal();
}