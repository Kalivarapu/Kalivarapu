 #include<stdio.h>
 int main()
 {
 	int x,i=1,n,p=1;
 	scanf("%d%d",&x,&n);
 	while(i<=n)
 	{
 	p=p*x;
	 i=i+1;	
	 }
	 printf("%d",p);
 }
