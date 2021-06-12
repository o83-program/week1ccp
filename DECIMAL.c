#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main()
{
	int i=0,decimal_num,remainder,binary_num=0;
	clrscr();
	printf("\n enter the decimal number");
	scanf("%d",&decimal_num);
	while(decimal_num!=0)
{
	remainder=decimal_num%2;
	binary_num+=remainder*pow(10,i);
	decimal_num=decimal_num/2;
	i++;
}
	printf("\n the binary equivalent is=%d",binary_num);
	getch();
	return 0;
}