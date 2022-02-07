#include<stdio.h>
int main()
{
    int a[4][2]={10,20,30,40,50,60,70,80};
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
