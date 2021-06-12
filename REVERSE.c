#include<stdio.h>
#include<conio.h>
	int main()
{
	int num,temp;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&num);
	printf("\ enter the reversed number");
	while(num!=0)
{
	temp=num%10;
	printf("%d",temp);
	num=num/10;
}
	getch();
	return 0;
}