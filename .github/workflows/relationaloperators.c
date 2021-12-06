#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d%d",&a,&b);
	c=a>b;
	d=a<b;
	e=a>=b;
	f=a<=b;
	g=a==b;
	h=a!=b;
	printf("%d\n%d\n%d\n%d\n%d\n%d",c,d,e,f,g,h);
}
