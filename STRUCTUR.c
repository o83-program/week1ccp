#include<conio.h>
#include<stdio.h>
	int main()
{
	struct student
{
	int roll_number;
	char name[20];
	char section[20];
	char department[20];
	float fees;
	float results;
}
	stud1,stud2;
	printf("\n enter stud1 details:roll_number,name,section,department,fees,results");
	scanf("%d%s%s%s%f%f",&stud1.roll_number,stud1.name,stud1.section,stud1.department,&stud1.fees,&stud1.results);
	printf("\n enter stud2 details:roll_number,name,section,department,fees,results");
	scanf("%d%s%s%s%f%f",&stud2.roll_number,stud2.name,stud2.section,stud2.department,&stud2.fees,&stud2.results);
	if(stud1.results>=stud2.results)
	printf("\n stud1 has scored the heighest:roll_number=%d,name=%s,section=%s,department=%s,fees=%f,results=%f",stud1.roll_number,stud1.name,stud1.section,stud1.department,stud1.fees,stud1.results);
else
	printf("\n stud2 has scored the heighest:roll_number=%d,name=%s,section=%s,department=%s,fees=%f,results=%f",stud2.roll_number,stud2.name,stud2.section,stud2.department,stud2.fees,stud2.results);

	getch();
	return 0;
}
