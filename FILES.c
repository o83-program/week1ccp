#include<stdio.h>
	int main(void)
{
	FILE*fptr;
	char ch;
	clrscr();
	fptr=fopen("BMSCE.txt","w");
	printf("\n enter your name:");
	while((ch=getchar())!='\n')
{
	putc(ch,fptr);
}
	fclose(fptr);
	fopen("BMSCE.txt","r");
	printf("\n file content:");
	while((ch=getc(fptr))!=EOF)
{
	printf("%c",ch);
}
	printf("\n end of file");
	fclose(fptr);
	return 0;
}