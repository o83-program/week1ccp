#include<stdio.h>
#include<conio.h>
#include<math.h>
    int main()
{
    int i,n,term,sum=0;
    clrscr();
    printf("\n enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    if(i%2!=0)
{
    term=pow(i,2);
    sum+=term;
}
}
    printf("\n the sum of the squares of odd numbers=%d",sum);
    getch();
    return 0;
}