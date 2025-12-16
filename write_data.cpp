#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i;
	fp=fopen("file.txt","w");
	while(i<20)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}
