#include <stdio.h>

int main() {
	char str[20];
	int n;
	printf("Enter the string : ");
	scanf("%s",&str);
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(int i=0;i<20;i=i+1){
		if (str[i] !=0) {
			printf("%c",str[i]+n);
		}
		else {
			break;
		}
		
	}
	return 0;
}
		
    
