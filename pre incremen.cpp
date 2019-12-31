#include <stdio.h>
int main()
{
	int a,b=5;
	a=++b;
	printf("%d\n",b);
	b+=1;
	printf("%d\n",a);
	printf("%d\n",b);
	a=b;
	printf("%d",a);
	return 0;
	
}
