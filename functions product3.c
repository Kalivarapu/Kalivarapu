#include<stdio.h> 
 int product(int a,int b, int c)
{
   return a * b * c;
}
 
 void main(){
 	int x,y,z;
 	scanf("%d%d%d",&x,&y,&z);
 	int a = product(x,y,z);
 	printf("%d",a);
 	
 }
