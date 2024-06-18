#include<stdio.h>

void rev(int a[], int i, int j){
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int main()
{
	int n, m, a[n + m], b[n];
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int j = 0;
	for(int i = n; i < m + n; i++){
		a[i] = b[j];
		j++;
	}
	for(int i = 0; i < m + n - 1; i++){
		for(int j = i + 1; j < m + n; j++){
			if(a[i] > a[j]){
				rev(a,i,j);
			}
		}
	}
	for(int i = 0; i < m + n; i++){
		printf("%d ", a[i]);
	}
}

