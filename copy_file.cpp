#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("filess.TXT","w");
	if(ft==NULL)
	{
		printf("file doesnot exist");
		exit(0);
	}
	ft=fopen("filess.TXT","w");
	if(ft==NULL)
	{
		printf("unable to open");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file copied");
	return 0;
}
