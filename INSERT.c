#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,n,j,num,arr[10];
	clrscr();
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	printf("\n enter the elements into the array:");
	scanf("%d",&arr[i]);
}
	printf("\n enter the element to be inserted:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
	if(arr[i]>num)
	{
	for(j=n-1;j>=i;j--)
	arr[j+1]=arr[j];
	arr[i]=num;
	break;
	}
	}
	n++;
	printf("\n print the new array after insertion:%d",num);
	for(i=0;i<=n;i++)
	printf("\t=%d",arr[i]);
	getch();
	return 0;
}