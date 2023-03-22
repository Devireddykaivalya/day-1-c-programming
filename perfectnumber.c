#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	 int number, sum=0, i;
	 printf("Enter number: ");
	 scanf("%d", &number);
	
	 /* Finding sum */
	 for(i=1; i< number; i++)
	 {
	  if(number%i==0)
	  {
	   sum = sum +i;
	  }
	 }
	 /* Making decision */
	 if(sum == number)
	 {
	  printf("%d is PERFECT.", number);
	 }
	 else
	 {
	  printf("%d is NOT PERFECT.", number);
	 }
	 
	 return(0);
}
