#include<stdio.h>

int main(){
	int input[] = {3,2,5,4,1};
	int result;
	int index = 0;
	int tempmin = input[0];

	int size = sizeof(input)/sizeof(input[1]);

	for(index = 0; index < size; index++){
		if(input[index] < tempmin){
			tempmin = input[index];
		}
	}

	result = tempmin; 
	printf("%d \n", result);
	return 0;
}