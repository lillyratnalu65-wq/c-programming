#include <stdio.h>
int main()
{
	int n,rev=0,d,temp;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("reverse=%d",rev);
	

	return 0;
}
