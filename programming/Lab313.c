#include <stdio.h>

int main () {
	int odd = 0;
	int even = 0;
	int arr[5];
	for (int i =1;i<=5;i++){
		printf("Enter number %d :",i);
		scanf("%d",&arr[i]);
	}
	for (int j=1;j<=5;j++){
		if (arr[j]%2 == 1) {
			odd=odd+1;
		}
		else {
			even=even+1;
		}
	}
	printf("No. of even integers are %d \n",even);
	printf("No. of odd intergers are %d \n",odd);
	return 0;
}
	
			