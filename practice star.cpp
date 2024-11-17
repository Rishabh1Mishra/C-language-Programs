/*#include<stdio.h>
int main(){
	int i,j,row;
	printf("Enter the value of rows:");
	scanf("%d",&row);
	for(i=0;i<=row;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
		return 0;
}

#include<stdio.h>
int main(){

 int i,j,row,k;
printf("Enter the value of row: ");
scanf("%d",&row);
for(i=1;i<=row;i++){
	for(j=1;j<=i;j++){
		printf(" ");
	
		
	}
	for(k=i;k<=row;k++){
		printf("*");
	}
	printf("\n");
	
}
return 0;
}
#include<stdio.h>
int main(){
	int i,j,k,row;
	printf("Enter the value of rows :");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=i;j<i;j++){
			printf(" ");
		}
		for(k=i;k<=row;k++){
		
		printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
#include<stdio.h>
int main(){
	int i,j,k,row;
	printf("Enter the values of rows :");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=i;j<row;j++){
			printf(" ");
		
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
