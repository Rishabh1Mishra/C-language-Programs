// swap two numbers .
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The numbers in a,b :\n");
	scanf("%d %d",&a,&b);
	a=a +b;
	b =a-b ;
	a = a-b ;
	printf("the value of a is: %d  \n the value of b is : %d",a,b);
	return 0;
}
