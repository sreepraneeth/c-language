#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter your name:");
	scanf("%[^\n]s",name);   /* [^\n] is  used to ignore the space between the characters */
	printf("My name is %s",name);
	return 0;
}
