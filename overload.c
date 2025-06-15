#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recursion (int x){
	int y = x;//set y to x
	x = y * x;//multiply current x value by last x value (y = last x value)
	if (x < 2000000){
		return recursion (x);
	}
	return x;
}
int main(){
	int x = 9;
	//creates a double which requires 8 bytes instead of 4 for int
	//compiler will give warning of overflow, might cause crash
	int * pointer = (int *) malloc(sizeof(int));
	//printf("%ld", sizeof(*pointer)); //returns size of pointer which is 4 bytes
	while (recursion (x) < 9999999999) {
		*pointer = recursion(x);
		printf("x is located in: %p\n", (void*)pointer);//prints content of *pointer
		printf("x = %d\n", recursion(x));//prints contnent of x, x to match *pointer
	}
	return 0;
}

