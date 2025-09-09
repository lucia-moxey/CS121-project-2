#include <stdio.h>

const int ARRAY_SIZE = 9;

void showMyArray(int* myList);
void runBubbleSort(int* myList);
void swapItems(int* num1, int* num2);

//takes pointer to start of array as input
void showMyArray(int* myList) {
	printf("[ ");
	for (int i = 0; i < ARRAY_SIZE; i++) { //loop going thru each element of array 
		printf("%d ", myList[i]);
	}
	printf("]\n");
}

//uses pointers to swap locations of values
void swapItems(int* a, int* b) {
	int temp = *a; //storing first value in temporary variable
	*a = *b;
	*b = temp;
}
//compares and swaps if in wrong order
void runBubbleSort(int* myList) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		for (int j = 0; j < ARRAY_SIZE - 1; j++) {
			if (myList[j] > myList[j + 1]) {
				swapItems(&myList[j], &myList[j + 1]);
				showMyArray(myList);
			}
		}
	}
}
int main() { 
	int myNumbers[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	
	printf("Before: \n");
	showMyArray(myNumbers);

	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swapItems(&x, &y);
	printf("x: %d, y: %d \n", x, y);
	
	//sort main array
	runBubbleSort(myNumbers);
	printf("After: \n");
	showMyArray(myNumbers);

	return 0;
} // end main
