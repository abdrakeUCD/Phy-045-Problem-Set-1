#include <stdio.h>
#include <math.h>

int main(){
	long int sum = 0;
	int j, N;
	printf("\nEnter N\n");
	scanf("%i", &N);
	for (j=0; j<N+1; j++){
		sum = sum+j;
	}
	printf("\nthe sum is %ld \n", sum);
}
