#include<stdio.h>
#define MAX_SIZE 100
	int main()
{
	int i,n;
	int arr[MAX_SIZE];
	clrscr();
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	printf("\n enter elements into the array:");
	scanf("%d",&arr[i]);
}
	for(i=n-1;i>=0;i--)
{
	printf("\n show elements in reverse order:%d",arr[i]);
}
	getch();
	return 0;
}