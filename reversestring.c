#include<stdio.h>
void reversestring();
int main()
{
	printf("enter the string:");
	reversestring();
	return 0;
}
void reversestring()
{
	char c;
	scanf("%c",&c);
	if(c !='\n')
	{
		printf("%c",c);
	}
}
