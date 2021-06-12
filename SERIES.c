#include<stdio.h>
#include<conio.h>
	int main()
{
	int n;
	float sum=0.0,a,i;
	clrscr();
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	a=i/(i+1);
	sum=sum+a;
}
	printf("\n the sum of the series 1/2+2/3+.... is=%d/%d=%f",n,n+1,sum);
	getch();
    return 0;
}