#include<stdio.h>

long long giai(int n){
	if(n == 1){
		return 1;
	}	
	return n * giai(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", giai(n));
	
}

