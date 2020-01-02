//sum of digits of a given number
#include<stdio.h>
int main()
{
	int sum=0,rem,n;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
   printf("Sum of digit of a given number is %d",sum);
   return 0;
}
