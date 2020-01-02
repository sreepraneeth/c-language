//sum of digits of a given number
#include<stdio.h>
int main()
{
	int rem,n,rev=0;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
   printf("Reverse of a given number is %d",rev);
   return 0;
}
