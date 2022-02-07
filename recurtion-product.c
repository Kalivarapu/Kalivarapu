 #include<stdio.h>
int prod( int a, int b)
{
    if((a == 0) || (b ==0))
        return 0;
    else if (a == 1)
        return b;
    else if (b == 1)
        return a;
    else
        return(a + prod( a, (b-1)));
}
int main()
{
    int prod( int, int);
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", prod(x,y));
}
