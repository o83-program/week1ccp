#include<stdio.h>
#include<conio.h>
    void main()
{
    int i,n,m;
    clrscr();
    printf("\n enter the value of m");
    scanf("%d",&m);
    printf("\n enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
{
    if(i%2==0)
    printf("\n it is even number=%d",i);
    else
    printf("\n it is an odd number=%d",i);
}
    getch();
}
