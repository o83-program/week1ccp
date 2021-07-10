#include<stdio.h>
	int main()
{
	int num1,num2,*ptr1,*ptr2;
	int sum,difference,multiplication,division,remainder;
	clrscr();
	ptr1=&num1;
	ptr2=&num2;
	printf("\n enter the first number num1:");
	scanf("%d",&num1);
	printf("\n enter the second number num2:");
	scanf("%d",&num2);
	sum=*ptr1+*ptr2;
	difference=*ptr1-*ptr2;
	multiplication=*ptr1**ptr2;
	division=*ptr1/ *ptr2;
	remainder=*ptr1%*ptr2;
	printf("\n display the calculations:sum=%d,difference=%d,multiplication=%d,division=%d,remainder=%d",sum,difference,multiplication,division,remainder);
	getch();
	return 0;
}
