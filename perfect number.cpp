//Perfect number
#include<stdio.h>
int main()
{
	int n,i,perfect=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	perfect+=i;
	}
	}
	if(n==perfect)
	{
	printf("Perfect number");
	}
	else
	{
	printf("Not a Perfect number");
	}
 return 0;

}
