#include <stdio.h>

int main() {
	int n1 = 4;
	int n2,i,j,count[4];
	n2=25;
	char pat[n1];
	char str[n2];
	printf("Enter the 4 letters you want to count : ");
	scanf("%s\n",&pat);
	/*idk why but */
	count[0]=0;
	count[1]=0;
	count[2]=0;
	count[3]=0;
	scanf("%s",&str);
	

	for (int i=0;i<n1;i++){
		for (int j=0;j<n2;j++){
			if (str[j]==pat[i]){
				count[i]=(count[i])+1;
			}
		}
	}


	for (int k=0;k<n1;k++){
	    printf("%d ",count[k]);
	}
	return 0;
}		
				
	