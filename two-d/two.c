#include <stdio.h>

int main(){
	int i;
	printf("\nEnter a number\n");
	scanf("%i",&i);
	if (i%2==1) printf("\nThis number is odd\n");
	else printf("\nThis number is even\n");
	printf("\n");
	return 0;
}
