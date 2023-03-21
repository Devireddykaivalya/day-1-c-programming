#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter the alphabet:\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n %c is a vowel.",ch);
	}
	else
	{
		printf("\n %c is a constant.",ch);
	}
	return 0;
}
