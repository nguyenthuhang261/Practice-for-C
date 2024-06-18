#include<stdio.h>

void pascal(int a[100][100], int n){
	for(int i = 0; i < n; i++){
		a[i][0] = 1;
		a[i][i] = 1;
		for(int j = 1; j < i; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[100][100] = {0};
	pascal(a,n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%d ", a[i][j]);
	
		}
		printf("\n");
	}
}

