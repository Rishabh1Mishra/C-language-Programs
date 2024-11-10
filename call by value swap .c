# include<stdio.h>
int swap(int,int);
int main() {
	int x,y ;
	printf("Enter the value of x, y:\n");
	scanf("%d %d",&x,&y);
	printf("Before swaping the value of \n x=%d \n y=%d \n ",x,y);
	swap(x,y);
	printf("\n After swaping the value of \n x=%d\n y=%d\n",x,y);
	return 0;
}
int swap(int a,int b){
	int t;
	t = a;
	a = b;
	b = t;
	printf("The value of \n a=%d \n b =%d ",a,b);
}
	

