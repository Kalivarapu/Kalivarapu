#include <stdio.h>
int main()
{
    float basic, gross, da, hra;
    printf("enter basic salary of an employee");
    scanf("%f", &basic);
    if(basic <= 10000)
    {
        da  = basic * 80/100;
        hra = basic * 20/100;
    }
    else if(basic <= 20000)
    {
        da  = basic * 90/100;
        hra = basic * 25/100;
    }
    else
    {
        da  = basic * 95/100;
        hra = basic * 30/100;
    }
    gross = basic + hra + da;

    printf("gross salary of employee = %.2f", gross);

    return 0;
}
