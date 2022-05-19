#include <stdio.h>

int main() {
	int n;
	int k=1;
	printf("Enter the number limit : ");
	scanf("%d",&n);
	int sqr[n];
	int arr[n];
	int j=1;
	for (int i=1;i<=n;i++){
		sqr[i]=i*i;
		if (sqr[i]>n) {
		}
		else {
			arr[j]=sqr[i];
			j=j+1;
		}
	}
	printf("(");
	while (k<j) {
		printf(" %d,",arr[k]);
		k=k+1;
	}
	printf(")");
	return 0;
}
	
			
			
			
		
		
	