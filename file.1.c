#include<stdio.h>
void main()
{
  FILE *fp;
  fp=fopen("example.bin","wb");
  if(fp==NULL)
  printf("file not created");
  else
  printf("file created succesfully");
  fclose(fp);
}