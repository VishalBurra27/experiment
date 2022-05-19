#include <stdio.h>
int main() {
	int var = 25;
	int i=1;
	int j;
	while (i <= var){
		if ((var%i)== 0) {
			j = var/i;
			printf("(%d , %d) ",i,j);
			i=i+1;
			printf("%d",i);
		}
	}
	return 0;
}
		