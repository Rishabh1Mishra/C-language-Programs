#include<stdio.h>
int main()
{
	int a,e,c,b;
	printf("enter the num\n");
	scanf("%d %d %d",&a,&b,&c);
	e=	(a>b&&a>c)?a:(b>c?b:c);
	printf("%d\n",e);
	return 0;
}
