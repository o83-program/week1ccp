#include<stdio.h>
#include<conio.h>
	int main()
{
	struct book
{
	char author[20];
	char title[20];
	float price;
	int number_of_pages;
	char publication[20];
}
	book1,book2,book3;
	printf("\n enter the book1 details:author,title,price,number_of_pages,date_of_publication");
	scanf("%s%s%f%d%s",book1.author,book1.title,&book1.price,&book1.number_of_pages,book1.publication);
	printf("\n enter the book2 details:author,title,price,number_of_pages,date_of_publication");
	scanf("%s%s%f%d%s",book2.author,book2.title,&book2.price,&book2.number_of_pages,book2.publication);
	printf("\n enter the book3 details:author,title,price,number_of_pages,date_of_publication");
	scanf("%s%s%f%d%s",book3.author,book3.title,&book3.price,&book3.number_of_pages,book3.publication);
	if(book1.price>=book2.price&&book1.price>=book3.price)
{
	printf("\n book1 has the heighest price:details:author=%s,title=%s,price=%f,number_of_pages=%d,date_of_publication=%s",book1.author,book1.title,book1.price,book1.number_of_pages,book1.publication);
}
	else if(book2.price>=book1.price&&book2.price>=book3.price)
{
	printf("\n book2 has the heighest price:details:author=%s,title=%s,price=%f,number_of_pages=%d,date_of_publication=%s",book2.author,book2.title,book2.price,book2.number_of_pages,book2.publication);
}
	else
	printf("\n book3 has the heighest price:details:author=%s,title=%s,price=%f,number_of_pages=%d,date_of_pubication=%s",book3.author,book3.title,book3.price,book3.number_of_pages,book3.publication);
	getch();
	return 0;
}