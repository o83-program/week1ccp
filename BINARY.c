#include<stdio.h>
#include<conio.h>
	int main()
{
	int arr[10],i,n,num,beg=0,end=n-1,mid,found=0;
	clrscr();
	printf("\n enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	printf("\n enter the elements into the array:");
	scanf("%d",&arr[i]);
}
	printf("\n enter the number that has to be searched:");
	scanf("%d",&num);
	while(beg<=end)
{
	mid=(beg+end)/2;
	if(arr[mid]==num)
{
	printf("\n element is found at the position:%d",num,mid);
	found=1;
	break;
}
	else if(arr[mid]>num)
	end=mid-1;
	else
	beg=mid+1;
}
	if(beg>end&&found==0)
	printf("\n the number is not present in the array:%d",num);
	getch();
	return 0;
}