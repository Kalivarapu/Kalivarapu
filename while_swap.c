#include <stdio.h>
#include <math.h>
int main()
{
    int n,s;
    int firstdigit, lastdigit, digits;
    printf("Enter any number: ");
    scanf("%d", &n);
    lastdigit  = n % 10;
    digits     = (int)log10(n); 
    firstdigit = (int)(n/ pow(10, digits)); 
    s= lastdigit;
    s*= (int) pow(10, digits);
    s+= n%((int) pow(10, digits));
    s-= lastdigit;
    s+= firstdigit;
    printf("%d",s);

    return 0;
}
