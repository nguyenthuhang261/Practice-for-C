#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	printf("%lld", tich);
}

