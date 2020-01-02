#include<stdio.h>
int main()
{
	int count=0;
	int i,n;
	printf("Enter your number");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
	if(n%2==0)
	{
		count=1;
		printf("Not a prime number");
	}
	}
	if(count==0)
	{
		printf("Prime number");

	}	
	return 0;
}
