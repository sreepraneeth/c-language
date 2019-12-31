#include<stdio.h>
int main()
{
	int a;
	printf("Enter  a number:");
	scanf("%2d",&a);
	printf("%d",a/10-a%10);
	return 0; 	
}
