#include<stdio.h>
int main()
{
	int n,t,d,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		d=t%10;
		sum+=d*d*d;
		t/=10;
	}
		if (sum==n) printf("armstrong\n");
		else printf("not armstrong\n");
		return 0;
	
}
