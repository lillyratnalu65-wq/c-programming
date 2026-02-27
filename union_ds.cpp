#include<stdio.h>
union student
{
	int rno;
};
int main()
{
	union student s={101};
	printf("%d", s.rno);
	return 0;
}
