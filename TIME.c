#include<stdio.h>
#include<conio.h>
    int convert_time(int,int);   
    int main()
{
    int hours,min,converted_time;
    clrscr();
    printf("\n enter hours and min:");
    scanf("%d %d",hours,min);
    converted_time=convert_time(hours,min);
    printf("\n converted_time= %d",converted_time);
    getch();
    return 0;
}
    int convert_time(int hours,int min)
{
    min=(hours*60)+min;
    return min;
}