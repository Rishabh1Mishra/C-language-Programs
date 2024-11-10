#include<stdio.h>
int main()
  int global_var=5;
{
	int a=3;
	int b=4;
	int sum;
	sum = a+b+global_var;
	printf("%d",sum);
	return 0;
}
