#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[49], b[49];
	printf("enter first string:");
	gets(a);
	printf("enter another string");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("strings are equal");
	}
	else
	{
		print("strings are not equal");
    }
    getch();
}
