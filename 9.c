#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int x=0,y=0,s=0,z=0;
	if(argc!=2)
	{
		printf("Enter 1 no to reverse");
		exit(0);
	}
	x=atoi(argv[1]);
	z=x;
	while(x>0)
    {
        y=x%10;
        x=x/10;
        s=s*10+y;
    }
    if(s==z)
        printf("%d is palindrome",s);
    else
        printf("%d is not palindrome",z);
    return 0;
}
