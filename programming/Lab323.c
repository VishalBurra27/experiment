#include <stdio.h>

int main() {
	int a = 0 ;
	int b = 0 ;
	int fib[];
	int n1 ;
	int n2 ;
	int m1;
	int m2;
	printf("Enter the limit numbers ");
	scanf("%d %d",&n1,&n2);
	if (n1<n2) {
		m1=n1;
		m2=n2;
	}
	else {
		m1=n2;
		m2=n1;
	}
	for (int i = 