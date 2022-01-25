#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
    char c;
    if(argc!=4)
    {
        printf("Input this filename\nAlso input the 2 file name you want to merge and the new file name - \n");
        exit(0);
    }
    FILE *f1,*f2,*f3;
    if((f1=fopen(argv[1],"r"))==NULL||(f2=fopen(argv[2],"r"))==NULL)
    {
        printf("File does not exist...\nPlease try again");
        exit(0);
    }
    f3=fopen(argv[3],"w");
    while((c=fgetc(f1))!=EOF)
    {
        fputc(c,f3);
    }
    while((c=fgetc(f2))!=EOF)
    {
        fputc(c,f3);
    }
    printf("Content copied successfully...");
    fclose(f1);
    fclose(f3);
    fclose(f2);
    return 0;
}
