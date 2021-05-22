#include<math.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("\n enter the first integer:");
    scanf("%d",&a);
    printf("\n enter the second integer:");
    scanf("%d",&b);
    printf("\n enter the third integer:");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("\n the average of three numbers: %f",avg);
    getch();
    return 0;
}
