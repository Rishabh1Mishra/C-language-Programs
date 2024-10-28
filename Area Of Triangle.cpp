//Calculate Area Of Triangle.
#include<stdio.h>
int main()
{
	int base ,height,area;
	printf("Enter The Height :");
	scanf("%d",&height);
	printf("Enter The Base :");
	scanf("%d",&base);
	area = base*height/2;
	printf("The Area Of Triangle Is: %d",area);
	return 0;
}
