/*
27 Feb, 2022
Problem 1

Roll Number:cs21btech11010
Name: Burra Vishal Mathews

 */
 
#include <stdio.h> 
int filereader(File *fp,char file_name[],int k){
	char del ;
	char str[100];
	
	
	fp = fopen(file_name,"r");
	
	if (fp == 0) return 0;
	while (scanf("%c",&del)!=-1{
		if (del == "/n"){
			fgets(str, 100, fp);
			printf("%s\n",str);
		}
	}
	
	fclose(fp);
	
}


int main(){
	FILE *fp;
	char file_name[];
	int k;
	
	while(scanf("%d",k)!= -1){
		scanf("%s",&file_name);
		filereader(fp,file_name,k);
	}
	
	return 0;
}
