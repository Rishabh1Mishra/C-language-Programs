// reverse space star pattern.
#include<stdio.h>
int main(){
	int i,j,k,row;
	printf("Enter the value of row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++){//for row 
	for(j=1;j<i;j++){//for space
	printf(" ");
	}
	for(k=i;k<=row;k++){
		printf("*");
		
	}
	printf("\n");
} 
	
	return 0;
}
