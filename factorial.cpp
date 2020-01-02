#include<stdio.h>
int main()
{
	int fact=1,n;
	int i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
	fact=fact*i;
	i++;
	}
	printf("Factorial Number is %d",fact);
	return 0;
}
