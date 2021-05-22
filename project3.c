#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    clrscr();
    printf("\n enter the value of x1:");
    scanf("%f",&x1);
    printf("\n enter the value of x2:");
    scanf("%f",&x2);
    printf("\n enter the value of y1:");
    scanf("%f",&y1);
    printf("\n enter the value of y2:");
    scanf("%f",&y2);
    distance=sqrt(((x2-x1),2)+((y2-y1),2));
    printf("\n distance=%f",distance);
    getch();
    return 0;
}
