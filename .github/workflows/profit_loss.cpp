#include<stdio.h>
int main()
{
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	if(cp==sp||cp<sp)
	{
		printf("profit");
	}
	else
	{
		printf("loss");
	}
}
