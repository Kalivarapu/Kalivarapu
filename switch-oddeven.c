#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("odd");
	           break;
	    case 3:printf("odd");
	           break;
	    case 5:printf("odd");
	           break;
	    case 7:printf("odd");
	           break;
	    case 9:printf("odd");
	           break;
	    case 2:printf("odd");
	           break;
	    case 4:printf("even");
	           break;
	    case 6:printf("even");
	           break;
	    case 8:printf("even"); 
	           break;
	    default:printf("not valid");
	}
}
