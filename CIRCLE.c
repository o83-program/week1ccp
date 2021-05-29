#include<stdio.h>
    float cal_area(float radius);
    int main()
{
    loat area,radius;
    clrscr();
    printf("\n enter the radius of the circle:");
    scanf("%f",&radius);
    area=cal_area(radius);
    printf("\n the area of the circle is %f",area);
    getch();
    return 0;
}
   float cal_area(float radius)
{
   float area;
    area=(3.14*radius*radius);
    return area;
}