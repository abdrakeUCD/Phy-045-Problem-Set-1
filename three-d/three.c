#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,root1,root2,root3,tolerance = 1e-6;
	printf("\nEnter a, b, and c.\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("\nYou have written that a = %lf, b = %lf, and c = %lf.\n",a,b,c);
	if (b*b-4.*a*c>0){
		root1 = ((-b + sqrt(b*b-4.*a*c)) / (2*a));
		root2 = ((-b - sqrt(b*b-4.*a*c)) / (2*a));
		printf("\nThe first root is %lf.\nThe second root is %lf.\n", root1,root2);
	}
	else{
		if (b*b-4.*a*c <= tolerance && b*b-4.*a*c > -tolerance){
			root1 = ((-b) / (2*a));
			printf("\nDegenerate state with the root %lf.\n", root1);
		}
		else printf("\nDiscriminant is negative; no real roots.");
	}
	printf("\n");
}

