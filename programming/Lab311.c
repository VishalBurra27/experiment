#include <stdio.h>

int main() {
	int arr[20];
	int i;
	for ( i=1;i<20;i++) {
	    arr[i]=3*i*i*i + 2*i*i +i +42;
		printf("value in %d th arr is %d \n",i,arr[i]);
	}
	return 0;
}
		