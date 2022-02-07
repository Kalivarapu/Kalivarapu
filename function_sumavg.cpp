#include<stdio.h>
void cal(int*,int*,int*);
int main()
{
    int n,s=0,a=0;
    scanf("%d",&n); 
    cal(&n,&s,&a);
    printf("the sum of numbers is %d",s); 
    printf("\nthe avg is %d",a);
}
void cal(int *n,int *sum,int *avg)
{
    int i,x;
    for(i=1;i<=*n;i++)
{
    scanf("%d",&x); 
    *sum=*sum+x;
}
    *avg=*sum/(*n);
}
