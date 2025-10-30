#include<stdio.h>
int main()
{
	long int i,n,fact=1;
	printf("enter n value");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact=%ld",fact);
	return 0;
}
