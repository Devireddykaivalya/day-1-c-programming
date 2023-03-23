#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value");
	scanf("%d",&n);
	printf("\n the first %d natural numbers: \n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum+=i;
	}
	printf("\n=%d",sum);
	return 0;
}
