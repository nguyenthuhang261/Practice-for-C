#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		if(i % 2 != 0){
			printf("%d ", i);
		}
	}
}

