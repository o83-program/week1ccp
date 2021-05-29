#include<stdio.h>
#include<conio.h>
    void swap(int,int);
    int main()
{
    int n1,n2;
    clrscr();
    printf("\n enter the first number:");
    scanf("%d",&n1);
    printf("\n enter the second number:");
    scanf("%d",&n2);
    printf("before swapping:n1=%d,n2=%d",n1,n2);
    swap(n1,n2);
    getch();
    return 0;
}
    void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping:n1=%d,n2=%d",a,b);
}