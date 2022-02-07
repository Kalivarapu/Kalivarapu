#include<stdio.h>
int fib(n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n%d",fib(i));
	}
}

