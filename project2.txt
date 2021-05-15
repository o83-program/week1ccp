#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float celcuis,fahrenheit;
    clrscr();
    printf("\n enter the value in fahrenheit:");
    scanf("%f",&fahrenheit);
    celcuis=(fahrenheit-32)*(5/9);
    printf("\n equivalent celcuis value is %f",celcuis);
    getch();
    return 0;
}
