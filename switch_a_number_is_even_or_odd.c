#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch(a%2==0)
	{
		case 1:printf("it is an even number");
		break;
		default:printf("it is an odd number");
	}
}
