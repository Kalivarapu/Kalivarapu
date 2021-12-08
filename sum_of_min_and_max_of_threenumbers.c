#include<stdio.h>
int main()
{
	int a,b,c,min,max;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c)
	{
		max=a;
	}
	else if (b>c && b>a)
	{
		max=b;
	}
	else 
	{
		max=c;
	}
	if(a<b && a<c)
	{
		min=a;
	}
	else if(b<c && b<a)
	{
		min=b;
	}
	else 
	{
		min=c;
    }
    printf("%d",min+max);
}
