#include<stdio.h>
#include<string.h>
struct employee
{
	int eno;
	char ename[20];
	long int salary;
}e1={101,"raju",40000},e2;
int main()
{
	struct employee e3={103,"hari",60000},e4;
	e2.eno=102;
	strcpy(e2.ename,"sri");
	e2.salary=50000;
	printf("enter e4 number");
	scanf("%d",&e4.eno);
	printf("enter e4 name");
	scanf("%s",&e4.ename);
	printf("enter e4 salary");
	scanf("%ld",&e4.salary);
	return 0;
}
