#include<stdio.h>
main()
{
	int a[50],n,i,key;
	scanf("%d",&n);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("found");
			return 0;
		}
	}
	printf("not found");
}
