#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long long n;
	int i;
	scanf("%lld", &n);
	int sum = 0;
	while(n>0){
		i = n % 10;
		sum = sum + i;
		n = n / 10;
	}
	printf("%d", sum);
		

}


