#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,n,pos=-1,arr[10],num,found=0;
	clrscr();
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	printf("\n enter the elements into the array:");
	scanf("%d",&arr[i]);
}
	printf("\n enter the number to be searched:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
{
	if(arr[i]==num)
{
	found=1;
	pos=i;
	printf("\n the number is found at the position=%d",num);
	break;
}
}
	if(found==0)
	printf("\n number is not found at that position=%d",num);
	getch();
	return 0;
}
