#include <stdio.h>

int main() {
	int var = 8 ;
	int i = 1;
	int j = var - i;
	while (i<8) {
		printf(" (%d , %d) ",i ,j);
		i = i +1 ;
		j = var - i;
	}
	return 0;
}