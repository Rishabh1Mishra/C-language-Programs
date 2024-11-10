// find Greatest Number Using Ternary Operator .
#include<stdio.h>
int main()
{
	int n1,n2,Big;
	printf("Enter Two Number:\n");
	scanf("%d %d",&n1,&n2);
	Big = (n1>n2)?n1:n2;
	printf("The Greatest Number Is %d",Big);
	return 0;
}

