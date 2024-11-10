// find odd even using ternary.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
    (n % 2 == 0)? 
	printf("%d is a even number ",n) : 
	printf("%d is a odd number ",n);
	return 0;
	
}
