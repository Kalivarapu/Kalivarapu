#include<stdio.h>
int main()
{
	char grade,E,V,A,G,F;
	printf("enter the grades");
	scanf("%c",&grade);
	if(grade=='E')
	{
		printf("excellent");
	}
	else if(grade=='V')
	{
		printf("very good");
	}
	else if(grade=='G')
	{
		printf("good");
	}
	else if(grade=='A')
	{
		printf("average");
	}
	else if(grade=='F')
	{
		printf("fail");
	}
}
