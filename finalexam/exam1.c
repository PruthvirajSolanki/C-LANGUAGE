#include<stdio.h>

int main() 
{
    float num1, num2, result;  
    char pruthh;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &pruthh); 
    
    printf("\nEnter first number: ");
    scanf("%f", &num1);   

    printf("\nEnter second number: ");
    scanf("%f", &num2); 
    
    switch(pruthh) 
	{
        case '+':
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);  
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);  
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);  
            break;
        case '/':
            if (num2 != 0) 
			{  
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);  
            } 
			else 
			{
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please enter valid choice.\n");
    }
}

