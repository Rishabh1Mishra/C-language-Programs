#include<stdio.h>
int multi(int n,int count)
{
	printf("%d*%d=%d\n",n,count,n*count);
	while(count<10){
		return multi(n,count+1);
	}
}

int main(){
	int n,i=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	multi(n,i);
	return 0;
}
