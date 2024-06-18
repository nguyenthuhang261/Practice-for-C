#include<stdio.h>

int main()
{
	int max = 0;
	int a[10005];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			if(max < a[i]){
				max = a[i];
			}
		}
	}
	if(max != 0){
		printf("%d", max);
	}
	
}

