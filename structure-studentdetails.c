#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float cgpa;
};
main()
{
	struct student s={20,"surendra",9.8},p,q;
	q.rno=12;
	strcpy(q.name,"satvik");
	q.cgpa=9.5;
	scanf("%d%s%f",&p.rno,&p.name,&p.cgpa);
	printf("student details are \n");
	printf("rno is %d name is %s name is %f\n",s.rno,s.name,s.cgpa);
	printf("rno is %d name is %s name is %f\n",p.rno,p.name,p.cgpa);
	printf("rno is %d name is %s name is %f\n",q.rno,q.name,q.cgpa);
}
