// find Greatest Number Using Ternary Operator .
#include<stdio.h>
int main()
{
	int n1,n2,n3,Big;
	
	printf("Enter Three Number:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	Big = (n1>n2 && n1>n3)?(n1) : ((n2>n3) ? n2 : n3 );
	printf("The Greatest Number Is %d",Big);
	return 0;
}

