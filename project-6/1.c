#include<stdio.h>
#include<string.h>

main() 
{
	 
	 char string[25],rev[25] = {'\0'};
	 int i,length = 0,pelindrome = 0;
	 
	 printf("Enter any string: ");
	 gets(string);
	 
	 for(i=0;string[i]!='\0';i++) 
	{
	 	length++;
	}
	 
	 printf("\nTHE LENGTH OF STRING '%s' = %d\n",string,length);
	 
	 for(i=length-1;i>=0;i--) 
	{
	 	rev[length-i-1] = string[i];
	}
	 for(pelindrome=1,i=0;i<length;i++)
	{
	 	if(rev[i]!=string[i])
		{
	 		pelindrome = 0;
		}
	}
	 
	 printf("\n================================\n");
	 
	 if(pelindrome == 1) 
	{
	 	printf("\nGIVEN STRING IS A PELINDROME.\n",string);
	}else
	{
	 	printf("\nGIVEN STRING IS NOT A PELINDROME.\n",string);
	}
}