#include<stdio.h>

int strong(int n){
	int dem = 0;
	while(n != 0){
		int a = n % 10;
		int tich = 1;
		for(int i = 1; i <= a; i++){
			tich *= i;
		}
		dem = dem + tich;
		n = n / 10;
	}
	return dem;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(n == strong(n)){
		printf("1");
	} else printf("0");
}

