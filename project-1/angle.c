#include<stdio.h>

main()

{
	int angle1,angle2,angle3;
	
	printf("FIRST ANGLE:");
	scanf("%d",&angle1);
	
	printf("SECOND ANGLE:");
	scanf("%d",&angle2);
	
	angle3 = 180 - (angle1 + angle2);
	
	printf("THIRD ANGLE: %d\n",angle3);
	
}