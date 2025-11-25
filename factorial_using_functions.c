#include <stdio.h>
 void fact(long int);
 int main()
 {
 	long int x;
 	printf("enter x value");
 	scanf("%ld",&x);
 	fact(x);
 	return 0;
 }
 void fact(long int x)
 {
  long int i,f=1;
 	for(i=1;i<=x;i++)
 	{
 		f=f*i;
	 }
	 printf("factorial=%ld",f);
 }
