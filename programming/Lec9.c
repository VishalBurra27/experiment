#include <stdio.h>
#include <string.h>

#define N 100

int main() {
	char str1[N] = "bc" ;
	char str2[N] = "bc" ;
	char str3[N] = "gg" ;
	
	printf("%d\n",strcmp(str1,str2));
	
	printf("%s %s ",str1,str3);
	
	strcpy(str1,str3);
	
	printf("%s %s ",str1,str3);
	
	return 0;
}

