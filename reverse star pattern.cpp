// reverse star pattern in right angle triangle .
#include<stdio.h>
int main()
{
    int i,j;
    

    // first loop for printing rows
    for (i = 1; i <= 5; i++) {

        // second loop for printing character in each rows
        for ( j = 5; j >=i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
