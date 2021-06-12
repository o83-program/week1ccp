#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,fact=1,num;
	clrscr();
	printf("\n enter the number:");
	scanf("%d",&num);
	if(num==0)
	fact=1;
	else
{
	for(i=1;i<=num;i++){
	fact=fact*i;
}
}
	printf("\nthe factorial of number is=%d,%d",fact,num);
	getch();
	return 0;
}
