#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:printf("a is max");
		break;
		case 0:  
		switch(a<b)
		{
        case 1:printf("b is max");
		break;
		default:printf("equal");
	}
	}
}
