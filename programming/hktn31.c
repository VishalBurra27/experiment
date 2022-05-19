/*
10 Feb, 2022
Problem 1

Roll Number:cs21btech11010
Name: Burra Vishal Mathews

 */
#include <stdio.h>
/*
function squares the base and assigns it to base till 
the square of the base is more than that required answer.
rest of the number is multipled by calling same function again
*/
int effpow(int m, int k){
	int exp = 1;
	unsigned long long base = m;
	if (k == 1) return base;
	
	while (k >=exp*2){
		base = base * base;
		exp = exp*2;
	}
	if (k == exp ){
		return base ;
	}
	else if (k < exp*2){
		int now = effpow(m,k-exp) ;
		return (base*now);
	}
}

int main(){
	int m,k ;
	unsigned long long power;
	while(scanf("%d %d",&m,&k) != EOF ){
		power = effpow(m,k);
		printf("%llu\n", power);
	}
	return 0;
}