#include<stdio.h>
int sum( int n){
	if(n==0) return 0;
	return n + sum(n-1);
	
}
int main(){
	int n,ans;
	printf("Enter a num :");
	scanf("%d",&n);
	ans = sum(n);
	printf("%d",ans);
	return 0;
}
