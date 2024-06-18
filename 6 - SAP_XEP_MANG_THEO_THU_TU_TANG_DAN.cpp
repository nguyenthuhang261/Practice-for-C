#include<stdio.h>

int a[10005];
void rev(int a[], int i, int j){
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				rev(a,i,j);
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

