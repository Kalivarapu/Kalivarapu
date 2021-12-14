#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a>0)
	{
		case 1:printf("it is positive");
		break;
		case 0:
		switch(a<0)
		{
			case 1:printf("it is negative");
			break;
			default :printf("it is zero");
		}	
	}
}
