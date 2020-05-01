#include<stdio.h>

int main(){
	int input;
	int result = 0;
	int lastDig;

	scanf("%d", &input);

	lastDig = input % 10;

	if(lastDig % 2 == 1){
		while(input){
			if(input & 1){
				result++;
			}
			input >>= 1;
		}			
	}

	else{
		while(input){
			if(!(input & 1)){
				result++;
			}
			input >>= 1;
		}

	}

	printf("result: %d \n", result);



}