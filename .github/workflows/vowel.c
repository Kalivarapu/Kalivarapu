#include<stdio.h>
main()
{
	char c;
	printf("enter the value");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("char is vowel");
	}
	else
	{
		printf("consonant");
	}
}
