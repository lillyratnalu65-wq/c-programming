#include<stdio.h>
int main()
{
	int x;
	printf("enter x value");
	scanf("%d",&x);
	{
	if(x%4==0&&x%100!=0||x%400==0)
	printf("leap year");
	else
	printf("not a leap year");
    }
    return 0;
	
}
