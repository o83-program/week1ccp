#include<math.h>
#include<stdio.h>
#include<conio.h>
    void main()
{
    int a,b,c;
    float d,deno,root1,root2;
    clrscr();
    printf("\n enter the values of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    deno=2*a;
    if(d>0)
{
    printf("\n real roots");
    root1=(-b+sqrt(d))/deno;
    root2=(b+sqrt(d))/deno;
    printf("\n root1=%f \n root2=%f",root1,root2);
}
    else if(d==0)
{
    printf("\n equal roots");
    root1=-b/deno;
    printf("\n root1=%f \n root2=%f",root1,root2);
}
    else

    printf("\n roots are imaginary");
    getch();

}




