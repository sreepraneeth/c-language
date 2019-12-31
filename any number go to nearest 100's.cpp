#include<stdio.h>
int main()
{
	int a;
	printf("Enter your number");
	scanf("%d",&a);
	printf("%d",((a/100+1)*100));
	return 0;	
}
