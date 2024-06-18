#include<stdio.h>
#include<math.h>

int tonguoc(int n){
	int dem = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			dem += i;
		}
	} 
	return dem;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(n == tonguoc(n)){
		printf("1");
	} else printf("0");
}


