#include<stdio.h>

int main()

{
	int score;
	char grade;
	
	printf("ENTER YOUR SCORE (out of 100): ");
	scanf("%d",&score);
	
	grade = (score>=90)? 'A':	
            (score>=80)? 'B':
            (score>=70)? 'C':
	        (score>=60)? 'D':  
	   	    (score>=50)? 'E': 'F';

    	printf("YOUR GRADE IS %c.",grade);
	
	switch(grade)
	{
		case'A':
			printf("EXCELLENT WORK!\n");
			break;
		case'B':
			printf("WELL DONE!\n");
			break;
		case'c':
			printf("GOOD JOB!\n");
			break;
		case'D':
			printf("PERFECT WORK!\n");
			break;
		case'E':
			printf("YOU PASSED,BUT YOU COULD DO BETTER.!\n");
			break;
		case'F':
			printf("SORRY,YOU FAILED!\n");
			break;
		default:
		    printf("INVALID GRADE.\n");						
	}	
	
	if(grade == 'A' ||grade == 'B' ||grade == 'C'||grade == 'D'||grade == 'E')
	{
		printf("CONGRATULATIONS! YOU ARE ELIGIBLE FOR THE NEXT LEVEL.\n");
	}
	else
	{
		printf("PLEASE TRY AGAIN NEXT TIME.\n");
	}
}