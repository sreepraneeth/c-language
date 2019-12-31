#include<stdio.h>
int main()
{
	char name[30],college[30],section[30];
	printf("Enter your name\n");
	scanf("%[^\n]s",name); //
	printf("Enter your college name\n");
	scanf("%s",college);
	printf("Enter your section\n");
	scanf("%s",section);
	printf("Name:%s\n",name);
	printf("College:%s\n",college);
	printf("Section:%s\n",section);
	return 0;
}
