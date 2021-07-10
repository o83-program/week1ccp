#include<stdio.h>
#include<conio.h>
	void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
	int main()
{
	int num1,num2;
	printf("\n enter the num1");
	scanf("%d",&num1);
	printf("\n enter the num2");
	scanf("%d",&num2);
	printf("\n before swapping num1=%d,num2=%d",num1,num2);
	swap(&num1,&num2);
	printf("\n efter swapping num1=%d,num2=%d",num1,num2);
	getch();
	return 0;
}