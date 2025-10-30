#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,CI;
	printf("enter p&r&t");
	scanf("%f%f%f",&p,&t,&r);
	CI=p*(pow(1+r/100,t)-1);
	printf("CI=%f",CI);
	return 0;
}
