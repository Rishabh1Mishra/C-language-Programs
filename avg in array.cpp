#include<stdio.h>
int main(){
	int age[] = {2,4,5,7,8,9,5,6};
	float  avg ,sum=0 ;
	int i;
	int length = sizeof(age)/sizeof(age[0]);
	printf("Total elements in array is %d\n",length);
	for(i=0;i<length;i++){
		sum += age[i];
	}
	
	printf("the sum of elements is %.2f\n",sum);
	avg = sum/length;
	printf("The average age is %.2f",avg);
	return 0;
}
