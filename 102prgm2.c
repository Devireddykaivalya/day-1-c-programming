#include<stdio.h>
struct complex
{
	int imag;
	float real;
};
struct number
{
	struct complex comp;
	int integer;
}num1;
int main()
{
	num1.comp.imag = 5;
	num1.comp.real = 2.25;	
	num1.integer = 3;
	printf("integer part: %d\n", num1.comp.imag);
	printf("real part: %2f\n",num1.comp.real);
	printf("integer:%d",num1.integer);
	return 0;	
}
