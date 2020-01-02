/*Divisible by 3:FIZZ,Divisible by 5:HIZZ,Divisible by 3 & 5:FIZZ HIZZ otherwise number*/
#include<stdio.h>
int main()
{
	int number;
	printf("Enter your number:");
	scanf("%d",&number);
	if(number%3==0)
	{
		if(number%5==0)
		printf("FIZZ HIZZ");
		else
		printf("FIZZ");
   }
	else if(number%5==0)
	{
	printf("HIZZ");
	}
	else
	{
	printf("Number:%d",number);
	}
	return 0;
}
