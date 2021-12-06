#include<stdio.h>
main()
{
	float hour,rate,earning;
	printf("Enter the values for hour & rate");
	scanf("%f%f",&hour,&rate);
	if(hour<40)
	{
		earning=hour*rate;
		printf("The total earning is %f",earning);
	}
	else
	{
		earning=hour*(rate*1.5);
		printf("The total earning is %f",earning);
	}
}
