//conditons:h<150:dwarf,150-165:Average height,160-190:Tall,h>190:Abnormal height using nested if-else
#include<stdio.h>
int main()
{
	int h;
	printf("Enter your height:");
	scanf("%d",&h);
	if(h>150)
	{
		if(h<165)
		printf("Average height");
		else if(h<190)
		printf("tall");
		else
		printf("Abnormal height");
    }
    else
    {
    	printf("dwarf");
	}
	return 0;
}

