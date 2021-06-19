#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,n,j,arr[10],num;
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	printf("\n enter the elements into the array:");
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
{
	if(arr[i]==num)
{
	for(j=i;j<n-1;j++)
	arr[j]=arr[j+1];
}
}
	printf("\n the updated array after deletion is:");
	for(i=0;i<n-1;i++)
	printf("\t=%d",arr[i]);
	getch();
	return 0;
}