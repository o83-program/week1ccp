#include<stdio.h>
#include<conio.h>
	int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("\n enter the values into the a matrix:");
	for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d",&a[i][j]);
}
}
	printf("\n enter the values into the b matrix:");
	for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d",&b[i][j]);
}
}
	printf("\n the sum of two matrices is taken as c:");
	for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
{
	c[i][j]=a[i][j]+b[i][j];
	printf("%d\t",c[i][j]);
}
	printf("\n");
}
	getch();
	return 0;
}