//space rightangle triangle pattern.
#include<stdio.h>
int main(){
	int i,j,k,row;
	printf("Enter the value of row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++){//for row 
	for(j=i;j<row;j++){//for space
	printf(" ");
	}
	for(k=1;k<=i;k++){
		printf("*");
		
	}
	printf("\n");
} 
	
	return 0;
}
