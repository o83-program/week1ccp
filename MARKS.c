
#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,r,c,j;
	int a[100][100],s[100];
	printf("\n enter the number of students and subjects:");
	scanf("%d%d",&r,&c);
	printf("\n enter the data");
	for(i=0;i<r;i++)
{
	printf("\n");
	for(j=0;j<c;j++)
{
	printf("\n the marks of students in each subject:%d%d",i+1,j+1);
	scanf("%d",&a[i][j]);
}
}
	for(j=0;j<c;j++)
{
	s[j]=a[0][j];
	for(i=0;i<r;i++)
{
	if(s[j]<a[i][j])
	s[j]=a[i][j];
}
}
	for(i=0;i<c;i++)
{
	printf("\n");
	printf("\n heighest in the subject:%d",i+1,s[i]);
}
	printf("\n");
	getch();
	return 0;
}