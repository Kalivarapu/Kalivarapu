#include<stdio.h>
void main(int a[],int l);
main()
{
	int s[20],n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
    {
    	scanf("%d",&s[i]);
	}
	max(s,n);
}
void max(int a[],int l)
{
	int m=a[0];
	int i;
	for(i=1;i<l;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	printf("max ele is %d",m);
}
