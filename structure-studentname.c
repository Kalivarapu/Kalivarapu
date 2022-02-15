#include<stdio.h>
struct student 
{
	int rno;
	char name[10];
	int m1,m2,m3;
};
main()
{
	int i;
	struct student  s[1];
	for(i=0;i<1;i++)
	{
		scanf("%d%s%d%d%d",&s[i].rno,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<1;i++)
	{
		printf("%d%s%d%d%d",s[i].rno,s[i].name,s[i].m1,s[i].m2,s[i].m3);
	}
}
