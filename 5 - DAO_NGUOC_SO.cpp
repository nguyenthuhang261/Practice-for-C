#include<stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long n1 = 0;
	while(n != 0){
		int a = n % 10;
		n1 = n1 * 10 + a;
		n /= 10;
	}
	printf("%lld", n1);
}


