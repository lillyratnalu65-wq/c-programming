#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int count=0;
	char ch;
	fp=fopen("filess.TXT","r");
	if(fp==NULL)
	{
		printf("file error");
		exit(0);
	}
	while ((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
	}
	fclose(fp);
	printf("%d",count);
	return 0;
}
