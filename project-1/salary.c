#include<stdio.h>

main()

{
	float base,HRA,DA,TA,gross;
	
	printf("BASE SALARY:");
	scanf("%f",&base);
	
	printf("HRA SALARY:");
	scanf("%f",&HRA);
	
	printf("DA SALARY:");
	scanf("%f",&DA);
	
	printf("TA SALARY:");
	scanf("%f",&TA);
	
	gross = base +(base * HRA/100)+
	              (base * DA/100)+
	              (base * TA/100);
	              
	printf("GROSS SALARY: RS %.2f\n",gross);              
	              
}
