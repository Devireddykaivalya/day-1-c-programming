#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>=b)
	{
		if (a>=c)
		printf("%d the largest number",&a);
		else
		printf("%d the largest number",&c);
	}
	else
	{
		if (b>=c)
		printf("%d the largest number",b);
		else
		printf("%d the largest number",c);
	}
	return 0;
}
