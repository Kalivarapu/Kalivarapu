#include<stdio.h>
struct traveller
{
	char name[20];
	int age;
	int trno;
	int stno;
	int coachno;
	char classtype[10];
};
main()
{
	struct traveller p,q,r;
	scanf("name:%s %d %d %d %d %s",&p.name,&p.age,&p.trno,&p.stno,&p.coachno,&p.classtype);
	scanf("%s %d %d %d %d %s",&q.name,&q.age,&q.trno,&q.stno,&q.coachno,&q.classtype);
	scanf("%s %d %d %d %d %s",&r.name,&r.age,&r.trno,&r.stno,&r.coachno,&r.classtype);
	printf("name is %s age is %d trno is %d stno is %d coachno is %d classtype is %s\n",p.name,p.age,p.trno,p.stno,p.coachno,p.classtype);
    printf("name is %s age is %d trno is %d stno is %d coachno is %d classtype is %s\n",q.name,q.age,q.trno,q.stno,q.coachno,q.classtype);
    printf("name is %s age is %d trno is %d stno is %d coachno is %d classtype is %s\n",r.name,r.age,r.trno,r.stno,r.coachno,r.classtype);
}
