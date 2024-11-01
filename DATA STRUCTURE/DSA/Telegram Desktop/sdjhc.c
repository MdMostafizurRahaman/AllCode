#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch='a';

    fp=fopen("a.txt","w");
    fputc(ch,fp);
    fclose(fp);
}
