//Write a program to accept(scanf) and find out the no. of digits of a number and return it
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	int count=0;
	while(number>0)
	{	
	number=number/10;
	count=count+1;
	}
	printf("%d",count);
	return 0;
}
