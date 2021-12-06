#include<stdio.h>
main()
{
	int a,b;
	printf("enter first no");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	int c=a+b;
	printf("sum is %d",c);
	int d=a-b;
	printf("\nsubtraction is %d",d);
	int e=a*b;
	printf("\nmultiplication is %d",e);
	int f=a/b;
	printf("\ndivison is %f",f);
	int g=a%b;
	printf("\nmod is %d",g);
}
