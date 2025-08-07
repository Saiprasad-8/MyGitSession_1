#include<stdio.h>
int main()
{
	FILE* ptr=fopen("sai.txt","w");
	char s[]="sai";
	fputs(s,ptr);
	fclose(ptr);

}