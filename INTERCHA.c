#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,n,temp,arr[30],small,large,small_pos,large_pos;
	clrscr();
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	printf("\n enter the elements into the array:");
	scanf("%d",&arr[i]);
}
	small=arr[0];
	small_pos=0;
	large=arr[0];
	large_pos=0;
	for(i=1;i<=n;i++)
{
	if(arr[i]<small)
{
	small=arr[i];
	small_pos=i;
}
	if(arr[i]>large)
{
	large=arr[i];
	large_pos=i;
}
}
	printf("\n the mallest number is=%d",small);
	printf("\n the position of the smallest number=%d",small_pos);
	printf("\n the largest number is=%d",large);
	printf("\n the position of the largest number is=%d",large_pos);
	temp=arr[large_pos];
	arr[large_pos]=arr[small_pos];
	arr[small_pos]=temp;
	printf("\n the new array is=%d");
	for(i=0;i<n;i++)
	printf("\n %d",arr[i]);
	getch();
	return 0;
}