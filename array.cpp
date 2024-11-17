#include<stdio.h>
int main(){
	int my_word[] ={1,2,3,4,5};
	int i ;
	for(i= 0;i<5;i++)
	{ printf("%d\n",my_word[i]);
	}


// size of array in bytes 
printf("%lu\n", sizeof( my_word));
printf("%lu\n",sizeof(my_word[2]));
int multi = sizeof(my_word[4])*sizeof(my_word);
int div = sizeof(my_word)/sizeof(my_word[4]);
printf("%d\n",multi);
printf("%d",div);

return 0;
}

