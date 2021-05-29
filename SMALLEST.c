#include<conio.h>
#include<stdio.h>
    int main()
{
    int a,b,c;
    printf("\n enter the values of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)
    printf("\n a is the smallest value=%d",a);
    else if(b<=c && b<=a)
    printf("\n b is the smallest value=%d",b);
    else
    printf("\n c is the smallest value=%d",c);
    getch();
    return 0;
}