// Find lowest element in array .
#include<stdio.h>
int main(){
	int age[]={1,2,5,85,95,47,5,22};
	int length, smallest ,i;
	 length = sizeof(age)/sizeof(age[0]);
	 smallest = age[0];
	 printf("The length of array elements is %d\n",length);
	 for(i=0;i<length;i++){
	 	if(smallest > age[i]){
	 		smallest = age[i];
		 }
	}
	 	printf("The lowest age is %d",smallest);
	 
	 return 0;
	 
	 
}
