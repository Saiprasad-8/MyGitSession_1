#include<stdio.h>
void main()
{
  FILE *fp;
  //fp=fopen("example.txt","w");
  fp=fopen("ex.bin","wb");
  if(fp==NULL)
  printf("file not created");
  else
  printf("file created succesfully");
  fprintf(fp,"%s %d","jayasri",20);
  //fputs("jayasri",fp);
  //putc('a',fp);
  //putw(25,fp);
  //rewind(fp);
  //fclose(fp);
  //fp=fopen("example.txt","r");
  //printf("\n%d",getw(fp));
  fclose(fp);
}