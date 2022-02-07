#include<stdio.h>
int main(void)
{
	
  int x;
  prime(x);
  return 0;
}
void prime(x)
{
 int i,j,c,n;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
    {
     int c=0;
      for(j=1;j<=i;j++)
      {
        if(i%j==0)
        {
          c++;
        }
        } 
        if(c==2)
        {
            printf("%d ",i);
        }
    }
}