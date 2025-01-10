#include <stdio.h>
#include <math.h>

/*
int main(){
	int j, N;
	long int fact;
	double x, sum;
	printf("\nEnter N\n");
	printf("\n");
	scanf("%i",&N);
	printf("\nEnter x\n");
	scanf("%lf",&x);
	sum=1;
	fact=1;
	for(j=1; j<N; j++){
		fact*=j;
		sum+=pow(x,j)/fact;
		printf("\n %i %lf\n",j,sum);
	}
	printf("\n");
}
*/

int main(){
	int j, N;
	long int fact;
	double x, sum;

        printf("\nEnter N\n\n"); scanf("%i",&N);
	printf("\nEnter x\n\n"); scanf("%lf",&x);

	sum = 1;
	fact = 1;
	for (j=1; j<N; j++){
		fact *= (2*j-1) * (2*j);
		sum = sum + pow(-1, j)*pow(x,2*j)/fact;
		printf("\n %i %lf\n",j,sum);
	}
	printf("\n");
	
}
