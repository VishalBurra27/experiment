#include <stdio.h>

int main() {
	int a;
	int b;
	printf("Enter the first number  : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	if (a > b) {
		printf("The first number %d is the Largest number ",a);
	}
	else if (a < b) {
		printf("The second number %d is the Largest number ",b);
	}
	else {
		printf("Both numbers are the same ");
	}
	return 0;
}
	