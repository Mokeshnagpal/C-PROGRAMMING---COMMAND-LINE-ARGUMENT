#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    FILE *f1,*f2;
    char c;
    if(argc!=3)
        printf("Please input the 2 file names only-1 you want to copy content from ;2 you want copy to");
    else
        {
    if(fopen(argv[1],"r")==NULL)
    {
        printf("File doesn't exist");
        exit(0);
    }
    f1=fopen(argv[1],"r");
    if((f2=fopen(argv[2],"r"))==NULL)
    {
        fclose(f2);
        f2=fopen(argv[2],"w");
    }
    else
    {
        printf("Click y if you want us to erase all the data else click n");
        scanf("%c",&c);
        if(c=='y'||c=='Y')
        {
            fclose(f2);
        f2=fopen(argv[2],"w");
        }
        else if(c=='n'||c=='N')
        {
            fclose(f2);
        f2=fopen(argv[2],"a");
        }
        else
        {
            printf("Wrong input !!!");
            exit(0);
        }
    }
    while((c=fgetc(f1))!=EOF)
    {
        fputc(c,f2);
    }
    fclose(f1);
    fclose(f2);
    printf("Content copied successfully!!!");

    }
    return 0;
}
