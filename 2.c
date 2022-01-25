#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    int c=0,a=0;
    if(argc>2)
        printf("Inputed more than one number please input one number only");
    else if(argc<2)
        printf("Please input a number;no number detected");
    else
    {
        a=atoi(argv[1]);
        if(a==1)
        {
            printf("Number is not prime");
            exit(0);
        }
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
                c++;
        }
        if(c==0)
            printf("Number is prime");
        else
            printf("Number is not prime");
    }
    return 0;
}
