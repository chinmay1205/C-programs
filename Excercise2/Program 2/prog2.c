#include<stdio.h>

void main()
{
        long double kw,j;
        int sec;
        printf("Enter the energy consumption in joules\n-->");  
        scanf("%Lf",&j); 
        printf("Enter the duration in seconds\n-->");
        scanf("%d",&sec);
        kw=(j/(1000*sec));
        printf("power consumption=%.5Lf kW",kw);

}