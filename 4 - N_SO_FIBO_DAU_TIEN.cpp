#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fibo(int n){
	if(n == 0 || n == 1) return n;
	else return fibo(n-2) + fibo(n-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n - 1; i++){
		printf("%d ", fibo(i));
	}
}

