#include <stdio.h>
int main()
{
 FILE *fp;
 int value;
 fp =fopen("C:/Users/richa/Documents/news.txt","rb");
if (fp)
 {
 // for (value=48;value<58;value++)
 //  fputc(value,fp);
 // fprintf(fp,"yoo guys it is john on this one ");
fseek(fp,10,SEEK_CUR);
 while (1)
  {
  value=fgetc(fp);
  if (value == EOF) break;
  else(printf("%c",value));
 }

fclose(fp);
 }
}