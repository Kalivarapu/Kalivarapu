#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	scanf("%d",&n);
	while(i<=n)
	{ 
		s=s+i*i;
		i++;
	}
	printf("sum of squares of first n natural numbers is %d",s);
	return 0;
}
