#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    if(argc!=4)
    {
        printf("Please try again\nInput the file name of this given file and 2 (.txt) file you wanna operate on and also line number you wanna delete-\n");
        exit(0);
    }
    char c;
    int x=1,y=atoi(argv[3]);
    FILE *f,*f1;
    f1=fopen(argv[2],"w");
    if((f=fopen(argv[1],"r"))!=NULL)
    {
        while((c=fgetc(f))!=EOF)
        {
            if(c=='\n')
            x++;
            if(x!=y)
                fputc(c,f1);
        }
        fclose(f);
        fclose(f1);
        printf("Content copied successfully !!!");
        return 0;
    }
}
