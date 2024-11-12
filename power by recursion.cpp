#include<stdio.h>
int p(int n,int a){
	if(a ==1)
	return n;
	else 
	return n*p(n,a-1);
}
int main(){
	int n,pw;
	printf("enter any no:\t");
	scanf("%d",&n);
	printf("Enter the power :");
	scanf("%d",&pw);
	int ans = p(n,pw);
	printf("The power of %d is %d ",n,ans);
	return 0;
}
