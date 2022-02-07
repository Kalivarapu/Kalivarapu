#include <stdio.h>
int EvenSum(int a,int b) 
{

int i, sum=0; 
for(i=a;i<=b;i++)

{

if(i%2==0)

{
sum=sum+i;

}

}
return sum;
}
int main()
{
    int x,y;
    printf("enter the range");
    printf("X=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y); 
    printf("sum=%d",EvenSum(x,y));
    return 0;
} 
