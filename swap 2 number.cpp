// swap two numbers .
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The numbers in a,b :\n");
	scanf("%d %d",&a,&b);
	c = a;
	a = b;
	b = c;
	printf("the value of a is%d  \n the value of b id %d",a,b);
	return 0;
}
