#include<stdio.h>
void main()
{
	double iv,fv,dec,dis,run_way_dist;
	printf("enter the initial and final velocity in kmph\n");
	scanf("%lf %lf",&iv,&fv);
	printf("enter the deceleration of plane \n");;
	scanf("%lf",&dec);
	printf("enter the distance of runway\n");
	scanf("%lf",&run_way_dist);
	dis=(-(fv*fv-iv*iv)/(2*dec));
printf(" the distance of runway: %lf\n",dis);
	if(dis<run_way_dist)
		printf("plane can land safely\n");
	else
		printf("plane cant land safely\n");

}