/*
11 Feb, 2022
Problem 2

Roll Number:cs21btech11010
Name: Burra Vishal Mathews

 */

#include <stdio.h>
#include <stdlib.h>
/*
Idea of the function is to add every place(like ones ,tens,etc)
like a normal paper addition*/
addnum(int *ptr1,int *ptr2,int n1,int n2){
	int limit;
	if (n1>n2) {
		limit = n1;
	}
	else limit =n2;
	int *pointr;
	return 0;
}
/*
Input is taken as string and converted into integers using
ascii numbers but subtracting -48 to get the integer 
*/
int larnum(char str1[], char str2[]){
	int *ptr1;
	int *ptr2;
	int k =0;
	int j =0;
	while (str1[j] != "\0" ){
		j=j+1;
	}
	n1=j;
	while (str2[k] != "\0"){
		k=k+1;
	}
	n2=k;
	ptr1=(int *)malloc(sizeof(int) * n1);
	for (int i =0;i<k;i++){
		int ascc = str[i];
		ptr1[i]= ascc - 48;
	}
	ptr2=(int *)malloc(sizeof(int) * n1);
	for (int i =0;i<k;i++){
		int ascc = str[i];
		ptr2[i]= ascc - 48;
	}
	addnum(ptr1,ptr2);
	free(ptr1);
	free(ptr2);
		
}
		
	

int main(){
	char str1[];
	char str2[];
	while (scanf("%s",&str1) != EOF){
		scanf("%s",&str2);
		
		printf(larnum(str1,str2));
	}
	return 0;
		
		
	
}

		