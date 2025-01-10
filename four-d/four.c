#include <stdio.h>
#include <math.h>

int main(){
	double a, sum;
	int j,N;
	printf("\nEnter a\n");
	scanf("%lf",&a);
	printf("\nEnter N\n");
	scanf("%i",&N);
	printf("\nCalculating geometric series from j to N\n");
	sum = 0;
	for (j = 0; j<N; j++){
		sum = sum + pow(a,j);
		printf("\n Successfully ran iteration %i with value %12.61f\n", j, sum);
	}
}
