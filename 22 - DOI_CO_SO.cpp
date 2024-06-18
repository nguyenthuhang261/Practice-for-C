#include<stdio.h>
#include<math.h>

int main()
{
	int n; 
	scanf("%d", &n);
	int tong = 0;
	int dem = 0;
	while(n != 0){
		int a = n % 10;
		tong += pow(2, dem) * a;
		++dem;
		n /= 10;
	}
	printf("%d", tong);
}

