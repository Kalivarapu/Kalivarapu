#include<stdio.h>
#include<stdbool.h>
bool leap(int a);
void main(){
	int n;
	scanf("%d",&n);
    printf("%d", leap(n));
}

bool leap(int a)
{
	if((a%4==0 && a%100!=0) || a%400==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
