#include<stdio.h>
void maxmin(int a[])
{
    int min=a[0];
    int max=a[0];
    int i;
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("max=%d, min=%d",max,min);
}
void main()
{
    int a[] = {232,34,466,3435,343};
    maxmin(a); 
}
