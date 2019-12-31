#include<stdio.h>
int main()
{
	char name[20];
	printf("enter your name ");
	scanf("%s",name);
	printf("%9s\n",name);
	printf("%.3s",name);
	return 0;
}
