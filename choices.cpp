/*1:add,2:subtract,3:Multiply,4:divisible*/
#include<stdio.h>
int main()
{
	int choice;
	int a,b,result;
	printf("Enter your choice \n:");
	scanf("%d",&choice);
	printf("Enter two numbers \n:");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:result=a+b;
			   printf("The sum of two number of %d+%d is %d \n",a,b,result);
			   break;
		case 2:result=a-b;
			   printf("The difference between two numbers of %d-%d is %d \n",a,b,result);
			   break;
		case 3:result=a*b;
		 	   printf("Multiplicaton of two numbers of %d*%d is %d \n",a,b,result);
		 	   break;
		case 4:result=a/b;
		 	   printf("Divison of two numbers of %d/%d is %d \n",a,b,result);
		 	   break;
		default:printf("Invalid choice");
				break;
	}
	return 0;
}
