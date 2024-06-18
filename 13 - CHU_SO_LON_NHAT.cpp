#include<stdio.h>

int main()
{
	int max = 0;
	long long n;
	scanf("%lld", &n);
	while(n != 0){
		int a = n % 10;
		if(max < a){
			max = a;
		}
		n /= 10;
	}
	printf("%d", max);
}

