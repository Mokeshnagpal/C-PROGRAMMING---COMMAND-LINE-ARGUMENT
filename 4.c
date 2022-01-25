#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    char c;
	int w=1,n=0;
	FILE *f1;
	char ch;
	if(argc!=2)
	{
		printf("\nEnter one file to Count words and characters..!!");
		exit(0);
	}
	else
    {
        FILE *f;
        if(fopen(argv[1],"r")==NULL)
        {
            printf("File doesn't exist !!!");
            exit(0);
        }
        else
            {
                f=fopen(argv[1],"r");
                while(c=getc(f)!=EOF)
                {
                    if(c=='\0'||c=='\n'||c==' ')
                        w++;
                    else
                        n++;
                }
                printf("Number of character - %d\n",n);
                printf("Number of words - %d",w);
                fclose(f);
            }
    }
return 0;
}




