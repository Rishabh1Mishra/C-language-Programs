//
#include<stdio.h>
int fact(int n){
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main(){
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	int f = fact(n);
	printf("factorial of %d is %d",n,f);
	return 0;
}
