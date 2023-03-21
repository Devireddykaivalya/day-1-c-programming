#include<stdio.h>
#include<conio.h>
int si,a,r,t;
int main()
{
	printf("enter the principle ammount");
	scanf("%d",&a);
	printf("enter the rate");
	scanf("%d",&r);
	printf("enter the time");
	scanf("%d",&t);
	printf("the simpleinterest is %d",&si);
	si=(a*r*t/100);
	return 0;	
}
