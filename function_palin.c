#include <stdio.h>
#include <stdbool.h>

bool palin(int n)
{
   int original=n;
   int reversed=0;
    while (n != 0)
    {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n=n/10;
    }

    if (original == reversed)
        return true ;
    else
        return false;
}
int main()
{
    int x,y;
    printf("enter the palin number");
    scanf("%d",&x);
    y=palin(x);
    if(y==true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
   return 0; 
}
