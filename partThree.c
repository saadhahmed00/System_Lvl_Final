#include<stdio.h>

int main(){
	int input[] = {3,2,5,4,1};
	int result;
	int index = 0;
	int tempmax = input[0];

	int size = sizeof(input)/sizeof(input[1]);

	if(input[size-1] % 2 == 1){
		for(index = 0; index < size; index++){
			if(input[index] > tempmax){
				tempmax = input[index];
			}
		}
	}
	else{
		for(index = 0; index < size; index++){
			if(input[index] < tempmax){
				tempmax = input[index];
			}
		}
	}

	result = tempmax; 
	printf("%d \n", result);
	return 0;
}