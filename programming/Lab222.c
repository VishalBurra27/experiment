#include <stdio.h>

int main() {
	int i = 0;
	int j = 1;
	int p ;
	int n = 10;
	printf("%d ",i);
	printf("%d ",j);
	while ( (n-1)>0) {
		p=i+j;
		printf("%d ",p);
		i=j;
		j=p;
		n=n-1;
		
	}
	return 0;
}
	
		
		
		