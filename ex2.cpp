#include<stdio.h>
int main()
{
	int a=10;
	printf("%d\n",++a + ++a + ++a + ++a);
	printf("%d",a);
	return 0;
}
