#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);       //y+7(6%15)/9
	int y=a*(b%c)/d;
	printf("%d",y);
}
