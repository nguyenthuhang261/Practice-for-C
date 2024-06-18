#include<stdio.h>

void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] >= max){
			max = a[i];
		}
	}
	return max;
}
int max1(int a[], int n){
	int max2 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max2 && a[i] < max(a,n)){
			max2 = a[i];
		}
	}
	return max2;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	nhap(a,n);
	printf("%d", max1(a,n));
}
