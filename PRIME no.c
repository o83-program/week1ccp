#include<stdio.h>
#include<conio.h>
	int main()
{
	int flag=0,i,num;
	clrscr();
	printf("\n enter the number:");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
{
	if(num%i==0)
{
	flag=1;
	break;
}
}
	if(flag==1)
	printf("\n the entered number is a not a prime number=%d",num);
	else
	printf("\n the entered number is a prime number=%d",num);
	getch();
	return 0;
}