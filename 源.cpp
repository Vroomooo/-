#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp,*fq;
	char str[100];
	int i,len,p=0,q=0;
	fq = fopen("2.txt","w");
	fp = fopen("1.txt","r");
	fscanf(fp,"%s",str);
	len = strlen(str);
	for (i = 0; i<len; i++)
	{
		if (str[i]==" ")
			p++;
		if (str[i]==".")
		{
			p++;
			q++;
		}
	}
	fprintf(fq,"%d %d",p,q);
	fclose(fp);
	fclose(fq);
	return 0;
}