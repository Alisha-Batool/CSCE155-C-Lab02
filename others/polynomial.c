#include<stdio.h>

int main()
{
	int x;
	printf("enter a value for x:");
	scanf("%d" ,&x);
	
	int formula = (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - 1*x*x + 7*x - 6);
	printf("The answer is %d\n" ,formula);
	return 0;
}