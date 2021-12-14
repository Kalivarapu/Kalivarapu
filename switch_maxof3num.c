#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	switch(a>b && a>c)
	{
		case 1:printf("a is max");
		break;
		case 0:  
		switch(b>c && b>a)
		{
        case 1:printf("b is max");
		break;
		default:printf("c is max");
	}
	}
}
