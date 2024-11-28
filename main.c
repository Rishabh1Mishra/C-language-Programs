#include<stdio.h>
void swap(int*a,int*b){
	int t=*a;
	*a=*b;
	*b=t;
}
	int main(){
		int a[] ={1,0,1,0,1,0,1,0};
		int n=sizeof(a)/sizeof(a[0]);
		int b=0,h=n-1;
		while(b<=h){
			if(a[b]==0){
				b++;
			}
		else if (a[h]==1){
			h--;
		}
		else
		{
			swap(&a[b],&a[h]);
			h--;
			b++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}