#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*#include <stdio.h>
int main () {
	int x;
	printf("%ld\n", sizeof(x)); //gives 4 as printed text
	return 0;
}
*/
int main(){
	int x = 9*9*9*9*9*9*9*9*9*9*9*9*9*9; //creates a double which requires 8 bytes instead of 4 for int
	//compiler will give warning of overflow, might cause crash
	int * pointer = (int *) malloc(sizeof(int));
	//printf("%ld", sizeof(*pointer)); //returns size of pointer which is 4 bytes
	*pointer = x;
	//TO-DO: multithread fuction to repeat until crash
	return 0;
}
