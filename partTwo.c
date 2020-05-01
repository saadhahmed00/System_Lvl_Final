#include<stdio.h>

int main(){
	int input;
	int result = 0;

	scanf("%d", &input);

	while(input){
		if(!(input & 1)){
			result++;
		}
		input >>= 1;
	}


	printf("result: %d \n", result);

	return 0;
}	