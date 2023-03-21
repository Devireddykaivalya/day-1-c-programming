#include<stdio.h>
int main()
{
	int m,n,i;
	printf("starting the number and ending value:\n");
	scanf("%d%d",&n,&n);
	if(m<n)
	{
	printf("the even numbers are:\n");
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	printf("\n");
	printf("the odd numberws are:\n");
	for(i=m;i<n;i++)
	{
		if(i%2!=0)
		printf("%d\n",i);
	}
	}
	else
	printf("the guven number is invalid");
}
