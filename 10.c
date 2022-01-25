#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i,j,t,c,n;
	printf("Enter how many no you want to check: ");
	scanf("%d", &n);

	if(argc!=n+1)
	{
		printf("Enter %d no to check prime", n);
		exit(0);
	}
	for(i=1; i<argc; i++)
	{
		c=0;
		t=atoi(argv[i]);
		for(j=1; j<=t; j++)
		{
			if(t%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("\nPrime no: %d\n", t);
		}
		else
		{
			printf("\nNot a Prime no: %d\n", t);
		}
	}
	return 0;
}
