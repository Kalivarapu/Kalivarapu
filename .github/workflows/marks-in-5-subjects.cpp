#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	float percentage;
	scanf("%d",&marks1);
	scanf("%d",&marks2);
	scanf("%d",&marks3);
	scanf("%d",&marks4);
	scanf("%d",&marks5);
	percentage=(marks1+marks2+marks3+marks4+marks5)/5;
	if(percentage>90)
	{
	   printf("a");
	}
	else if(percentage>80)
	{
		printf("b");
	}
	else if(percentage>70)
	{
		printf("c");
	}
	else if(percentage>40)
	{
		printf("d");
	}
	else if(percentage<40)
	{
		printf("e");
	}
} 
