#include<conio.h>
#include<stdio.h>
    int main()
{
    int n,sum=0,m;
    clrscr();
    printf("\n enter a number");
    scanf("%d",&n);
    while(n>0)
{
    m=n%10;
    sum=sum+m;
    n=n/10;
}
    printf("\n sum is of the number is=%d",sum);
    getch();
    return 0;
}