#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long temp;
	long long n = a;
	long long m = b;
	while(m != 0){
		temp = n % m;
		n = m;
		m = temp;	
	}
	printf("%lld\n", n);
	printf("%lld\n", (a*b)/n); // cong thuc: UCLN * BCNN = a * b

}

