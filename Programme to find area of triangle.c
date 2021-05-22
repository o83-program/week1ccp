#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    clrscr();
    printf("\n enter the three sides:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n area of triangle=%lf",area);
    getch();
    return 0;
}
