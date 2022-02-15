#include<stdio.h>
struct std
{
	int rno;
	char name[10];
	int m1,m2,m3;
};
void calculate(struct std e)
{
	int total=e.m1+e.m2+e.m3;
	printf("rno is %d",e.rno);
	printf("name is %s",e.name);
	printf("\ntotal is %d",total);
	printf("\n%f",total/3);
}
main()
{
	struct std s={21,"gowshik",23,30,28};
	calculate(s);
}
