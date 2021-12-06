#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the vcalues of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("it is a triangle");
	}
	else
	{
		printf("it is not a triangle");
	}
}
