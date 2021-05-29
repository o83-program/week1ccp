#include<stdio.h>
#include<math.h>
    float cal_area(int,int,int);
    int main()
{
    int a,b,c,s;
    float area;
    printf("\n enter the first side a:");
    scanf("%d",&a);
    printf("\n enter the second side b:");
    scanf("%d",&b);
    printf("\n enter the third side c:");
    scanf("%d",&c);
    area=cal_area(a,b,c);
    printf("\n the area of triangle is=%f",area);
    getch();
    return 0;
}
    float cal_area(int a,int b,int c)
{
    float s,area;
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return s;
}
