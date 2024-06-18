#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long long fibo(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	unsigned long long f0=1, f1=1, fn;
	for(int i = 1; i < n; i++){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	return fn;
}

int main()
{
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int n;
		scanf("%d", &n);
		printf("%llu\n", fibo(n));
	}

}

