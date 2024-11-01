#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch='@';
    fp=fopen("@.txt","w");
    fputc(ch,fp);
    fclose(fp);
}
