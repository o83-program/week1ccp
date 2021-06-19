#include<stdio.h>
#define MAX_SIZE 100
	int main()
{
	int i,n,sum=0;
	int arr[MAX_SIZE];
	clrscr();
	printf("\n enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	printf("\n enter the elements into the array:%d",&n);
	scanf("%d",&arr[i]);
}
	for(i=0;i<n;i++)
{
	sum=sum+arr[i];
}
	printf("\n sum of the elements of the array=%d",sum);
	getch();
	return 0;
}