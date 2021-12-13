#include<stdio.h>
main()
{
	int n;
	float b,c,t;
	printf("Enter the number of units of electricity");
	scanf("%d",&n);
	if(n<=50)
	{
		b=(float)(n*(0.5));
	}
	if(n<=150 && n>50)
	{
		b=(float)(50*(0.5))+((n-50)*(0.75));
	}
	if(n<=250 && n>150)
	{
		b=(float)(50*(0.5))+((100*(0.75))+(n-150)*(1.2));
	}
	if(n>250)
	{
		b=(float)(n*(1.5));
	}
	t=(float)1.2*b;
	printf("the total electrical bill is %f",t);
}
