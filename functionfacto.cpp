#include<stdio.h>
int fact(int a);
int main(void)
{
int x;
printf("enter the value");
scanf("%d",&x);
int b=fact(x);
printf("the factorial%d",b);
return 0;
	
}
int fact(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
		
	}
	return f;
}
