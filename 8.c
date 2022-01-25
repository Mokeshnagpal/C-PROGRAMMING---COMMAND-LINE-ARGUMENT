#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i;
	char a[50], b[50];
	if(argc!=2)
	{
		printf("Please enter one word to check: ");
		exit(1);
	}
	for(i=1; i<argc; i++)
	{
		strcpy(a,argv[i]);
		strcpy(b,strrev(argv[i]));
		if(strcmp(a,b)==0)
		{
			printf("\nIt's Palindrome ");
		}
		else
		{
			printf("\nIt's not Palindrome");
		}
	}
	return 0;
}
