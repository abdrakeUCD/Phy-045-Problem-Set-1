#include <stdio.h>
#include <math.h>

int main(){
	int sum = 0;
	int j, N;
	printf("\nEnter N\n");
	scanf("%i", &N);
	for (j=0; j<N+1; j++){
		sum = sum+j;
	}
	printf("\nthe sum is %30i \n", sum);
}
