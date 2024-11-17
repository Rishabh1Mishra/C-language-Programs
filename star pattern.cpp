// for star* pattern in right angle triangle .
#include<stdio.h>
int main(){
	int rows ;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i =0;i<rows;i++){
		for(int j = 0;j<=i;j++){
			printf("*");
		}
	
	printf("\n");
}
	return 0;
}
//for columnn (j) numbers .

/*
#include<stdio.h>
int main(){
	int rows ;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i =0;i<rows;i++){
		for(int j = 0;j<=i;j++){
			printf("%2d",j);
		}
	
	printf("\n");
}
	return 0;
}*/
/* for rows numbers .0,1,2,3.
#include<stdio.h>
int main(){
	int rows ;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i =0;i<rows;i++){
		for(int j = 0;j<=i;j++){
			printf("%d",i);
		}
	
	printf("\n");
}
	return 0;
}
*/

