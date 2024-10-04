#include<stdio.h>

void main()
{

	int num1=10;

	int num2=20;

	int temp;

	temp = num1;

	num1= num2;

	num2= temp;

	printf("%d,%d\n",num1,num2);
}
