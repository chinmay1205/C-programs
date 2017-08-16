#include<stdio.h>

void main()
{
	int lumens,wat,lpw;
	
	printf("Enter the power consumption in watt\n-->");
	scanf("%d",&wat);
	printf("Enter the luminous efficiency in lumens per watt\n-->");
	scanf("%d",&lpw);
	lumens=wat*lpw;
	printf("luminous flux=%d lumens \n",lumens);
}
