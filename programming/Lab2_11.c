#include <stdio.h>

int main() {
	int a = 5 ;
	while (a >1) {
		a = a - 2;
	}
	if (a == 1){
		printf("The number is odd");
	}
	else{
		printf("The number is even");
	}
	return 0;	
}
