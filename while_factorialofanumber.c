#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial of a number %d",f);
	return 0;
}
